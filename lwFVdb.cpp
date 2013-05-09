/*
    Lightweight version of the FinvizDB object; only pulls DB id's.  This is used
    to reduce the memory footprint significantly.
 */

#ifndef ST_FINVIZDBLIGHTWEIGHT_H_
#define ST_FINVIZDBLIGHTWEIGHT_H_


typedef struct _FINVIZ_DB_INDEX_SET {
    char ticker[8];

    // count of all indexes for this ticker
    size_t record_count;

    // index sets
    size_t * finantial_idxs;
    size_t * overview_idxs;
    size_t * ownership_idxs;
    size_t * performance_idxs;
    size_t * technical_idxs;
    size_t * valuation_idxs;

} FINVIZ_DB_INDEX_SET, *P_FINVIZ_DB_INDEX_SET;

// Lightweight version of the finviz DB item.
class ST_FinvizDBLightweight : ST_BaseError
{

public:

    // mysql block
    Block *mysqli;

    // class constructor
    ST_FinvizDBLightweight();

    // =========== Query Parameters =====================

    // REQUIRED: timestamp greater than/less than
    char * ts_le;
    char * ts_ge;

    // OPTIONAL: ticker
    char *ticker;

    // =========== Data Retrieval =======================

    // retrieve distinct tickers from db
    char ** tickers;
    size_t ticker_n;

    // Retrieve tickers
    BP_ERROR_T FetchTickers();

    // =============== Fetch Ticker Records ==========================

    // Flag indicating that a statement is open.  Statement must be closed
    // before another ticker can be opened.
    bool ticker_stmt_open;

    // last index retrieved via this session
    size_t last_idx;

    // When a record is retrieved, this holds the intermediate
    // string representations of that record, that needs to be translated
    // into the structures below. (join query has 78 records)
    char record_stmt_bind_strs[79][64];

    // these will be populated with data when a record is fetched
    FINVIZ_OVERVIEW_ITEM     overview;
    FINVIZ_OWNERSHIPS_ITEM   ownership;
    FINVIZ_PERFORMANCES_ITEM performance;
    FINVIZ_TECHNICAL_ITEM    technical;
    FINVIZ_VALUATION_ITEM    valuation;

    // if this flag is set, only the last record will be pulled using limit/asc
    bool only_pull_last_records;

    // open ticker session
    BP_ERROR_T OpenTickerStatement(char *ticker);

    // fetch record
    BP_ERROR_T FetchRecord();

    // closes the active ticker statement
    BP_ERROR_T CloseCurrentTickerStatemet();

    // utility function to delete mpf_class objects in use (called before iterations)
    BP_ERROR_T DeleteRecordData();


    // =============== Information Visualization =====================

    // prints a list of all tickers available, newline delimited
    BP_ERROR_T DisplayTickers();

    // display current record data
    BP_ERROR_T DisplayCurrentRecordData();

    // display current overview item
    BP_ERROR_T DisplayCurrentOverview();

    // display current ownership item
    BP_ERROR_T DisplayCurrentOwnership();

    // display current performance item
    BP_ERROR_T DisplayCurrentPerformance();

    // display current technical item
    BP_ERROR_T DisplayCurrentTechnical();

    // display current valuation item
    BP_ERROR_T DisplayCurrentValuation();

};

#endif /* ST_FINVIZDBLIGHTWEIGHT_H_ */
