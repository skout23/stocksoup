#ifndef ST_FINVIZDB_H_
#define ST_FINVIZDB_H_

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%%% Finviz Retrieval Structures %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// structure to hold retrieved finviz items
typedef struct __FINVIZ_OVERVIEW_ITEM {

    size_t id; //         | int(11)      | NO   | PRI | NULL              | auto_increment |
    char ticker[256]; //     | varchar(255) | NO   |     | NULL              |                |
    char company[256]; //    | varchar(255) | NO   |     | NULL              |                |
    char sector[256]; //     | varchar(255) | NO   |     | NULL              |                |
    char industry[256]; //   | varchar(255) | NO   |     | NULL              |                |
    char country[256]; //    | varchar(255) | NO   |     | NULL              |                |
    mpf_class * market_cap; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_e; //        | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * price; //      | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volume; //     | varchar(32)  | NO   |     | NULL              |                |
    char ts[256]; //         | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |

} FINVIZ_OVERVIEW_ITEM, *P_FINVIZ_OVERVIEW_ITEM;

// finviz ownerships item
typedef struct __FINVIZ_OWNERSHIPS_ITEM {

    size_t id; //            | int(11)      | NO   | PRI | NULL              | auto_increment |
    char ticker[256]; //        | varchar(255) | NO   |     | NULL              |                |
    mpf_class * market_cap; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * outstanding; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * floating; //         | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * insider_own; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * insider_trans; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * inst_own; //      | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * inst_trans; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * float_short; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * short_ratio; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * avg_volume; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * price; //         | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * change; //        | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volume; //        | varchar(32)  | NO   |     | NULL              |                |
    char ts[256]; //               | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |

} FINVIZ_OWNERSHIPS_ITEM, *P_FINVIZ_OWNERSHIPS_ITEM;

// finviz performances structure
typedef struct __FINVIZ_PERFORMANCES_ITEM {

    size_t id; //           | int(11)      | NO   | PRI | NULL              | auto_increment |
    char ticker[256]; //       | varchar(255) | NO   |     | NULL              |                |
    mpf_class * perf_week; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * perf_month; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * perf_quart; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * perf_half; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * perf_year; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * perf_ytd; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volatility_w; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volatility_m; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * recom; //        | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * avg_volume; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * ref_volume; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * price; //        | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * change; //       | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volume; //       | varchar(32)  | NO   |     | NULL              |                |
    char ts[32]; //           | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |

} FINVIZ_PERFORMANCES_ITEM, *P_FINVIZ_PERFORMANCES_ITEM;

// industry health snapshot
typedef struct __FINVIZ_SECTOR_INDUSTRY_HEALTH_SNAPSHOT_ITEM {
    size_t id; //              | int(11)      | NO   | PRI | NULL              | auto_increment |
    char sector[256]; //          | varchar(255) | NO   |     | NULL              |                |
    char industry[256]; //        | varchar(255) | NO   |     | NULL              |                |
    mpf_class * snapshot_health; // | varchar(255) | NO   |     | NULL              |                |
    char ts[32]; //              | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |
} FINVIZ_SECTOR_INDUSTRY_HEALTH_SNAPSHOT_ITEM, *P_FINVIZ_SECTOR_INDUSTRY_HEALTH_SNAPSHOT_ITEM;

// finviz technical item
typedef struct __FINVIZ_TECHNICAL_ITEM {
    size_t id; //        | int(11)      | NO   | PRI | NULL              | auto_increment |
    char ticker[32]; //    | varchar(255) | NO   |     | NULL              |                |
    mpf_class * beta; //      | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * atr; //       | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * sma20; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * sma50; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * sma200; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * _52w_high; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * _52w_low; //  | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * rsi; //       | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * price; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * change; //    | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * from_open; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * gap; //       | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volume; //    | varchar(32)  | NO   |     | NULL              |                |
    char ts[256]; //        | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |

} FINVIZ_TECHNICAL_ITEM, *P_FINVIZ_TECHNICAL_ITEM;

// finviz valuations item
typedef struct __FINVIZ_VALUATION_ITEM {
    size_t id; //             | int(11)      | NO   | PRI | NULL              | auto_increment |
    char ticker[32]; //         | varchar(255) | NO   |     | NULL              |                |
    mpf_class * market_cap; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_e; //            | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * fwd_p_e; //        | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * peg; //            | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_s; //            | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_b; //            | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_c; //            | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * p_fcf; //          | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * eps_this_y; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * eps_next_y; //     | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * eps_past_5_y; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * eps_next_5_y; //   | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * sales_past_5_y; // | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * price; //          | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * change; //         | varchar(32)  | NO   |     | NULL              |                |
    mpf_class * volume; //         | varchar(32)  | NO   |     | NULL              |                |
    char ts[32]; //             | timestamp    | NO   |     | CURRENT_TIMESTAMP |                |

} FINVIZ_VALUATION_ITEM, *P_FINVIZ_VALUATION_ITEM;

// data structure to hold sorted information
typedef struct _FINVIZ_SORTED_DB_DATA {

    // ticker name
    char ticker[32];

    // pointer array of overview items matching
    P_FINVIZ_OVERVIEW_ITEM *     overview_items;

    // pointer array of ownerships items
    P_FINVIZ_OWNERSHIPS_ITEM *   ownership_items;

    // pointer array of performance items
    P_FINVIZ_PERFORMANCES_ITEM * performance_items;

    // pointer array of technical items
    P_FINVIZ_TECHNICAL_ITEM *    technical_items;

    // pointer array of valuation items
    P_FINVIZ_VALUATION_ITEM *    valuation_items;

} FINVIZ_SORTED_DB_DATA, *P_FINVIZ_SORTED_DB_DATA;


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%%%%%%%% Class Definition %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// Finviz DB interface class.  Used to retrieve finviz records between date constraints
// and store them in local objects.  Used to gather data for analysis.

class ST_FinvizDB : ST_BaseError
{
public:

    // mysql conection to use when making retrievals
    Block * mysqli;

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // %%%%%%%% Individual Structures %%%%%%%%%%%%%%%%%%%%%%%%%%%
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    // overviews retrieved
    P_FINVIZ_OVERVIEW_ITEM overviews;
    size_t overviews_n;

    // ownerships retrieved
    P_FINVIZ_OWNERSHIPS_ITEM ownerships;
    size_t ownerships_n;

    // performances retrieved
    P_FINVIZ_PERFORMANCES_ITEM performances;
    size_t performances_n;

    // sector industry health snapshots retrieved
    P_FINVIZ_SECTOR_INDUSTRY_HEALTH_SNAPSHOT_ITEM sector_industry_health_snapshots;
    size_t sector_industry_health_snapshots_n;

    // technicals retrieved
    P_FINVIZ_TECHNICAL_ITEM technicals;
    size_t technicals_n;

    // valuations retrieved
    P_FINVIZ_VALUATION_ITEM valuations;
    size_t valuations_n;

    // ======= Sorted Technical Data ========================

    // list of unique tickers in the pull, here for reference (must be freed on delete)
    char ** ticker_list;
    size_t  ticker_list_n;

    // sorted database data, stores references to raw data above)
    P_FINVIZ_SORTED_DB_DATA sorted_finviz_db_data;

    // ========= Member Functions =======================

    // class constructor
    ST_FinvizDB();

    // constraints that are used to retrieve stock info
    char timestamp_ge[32];
    char timestamp_le[32];

    // pull all finviz data between timestamps
    BP_ERROR_T PullAll(char *timestamp_ge, char *timestamp_le);

    // pull data
    BP_ERROR_T PullOverviews();
    BP_ERROR_T PullOwnerships();
    BP_ERROR_T PullPerformances();
    BP_ERROR_T PullSectorIndustryHealthSnapshots();
    BP_ERROR_T PullTechnicals();
    BP_ERROR_T PullValuations();

    // destroy data
    BP_ERROR_T DestroyAllLocalData();
    BP_ERROR_T DestroyOverviews();
    BP_ERROR_T DestroyOwnerships();
    BP_ERROR_T DestroyPerformances();
    BP_ERROR_T DestroySectorIndustryHealthSnapshots();
    BP_ERROR_T DestroyTechnicals();
    BP_ERROR_T DestroyValuations();

    // ======== Collective Data Sorting =====================

    // sorts all pulled data
    BP_ERROR_T SortAllPulledData();

    // ======== Individual Data Sorting =====================

    // Gets an array of overviews items for a given symbol (sorts from local data store)
    //         (RETURNED ITEM MUST BE FREED)
    //         (returned data is a pointer array to class data, deleting the class will destroy data
    //         being pointed to)
    P_FINVIZ_OVERVIEW_ITEM * GetSortedOverviewsForSymbol(char *symbol);

    // Gets an array of ownerships items for a given symbol (sorts from local data store)
    //         (RETURNED ITEM MUST BE FREED)
    //         (returned data is a pointer array to class data, deleting the class will destroy data
    //         being pointed to)
    P_FINVIZ_OWNERSHIPS_ITEM * GetSortedOwnershipsForSymbol(char *symbol);

    // Gets an array of perforrances items for a given symbol (sorts from local data store)
    //         (RETURNED ITEM MUST BE FREED)
    //         (returned data is a pointer array to class data, deleting the class will destroy data
    //         being pointed to)
    P_FINVIZ_PERFORMANCES_ITEM * GetSortedPerformancesForSymbol(char *symbol);


    // Gets an array of technical items for a given symbol (sorts from local data store)
    //         (RETURNED ITEM MUST BE FREED)
    //         (returned data is a pointer array to class data, deleting the class will destroy data
    //         being pointed to)
    P_FINVIZ_TECHNICAL_ITEM* GetSortedTechnicalsForSymbol(char *symbol);

    // Gets an array of valuation items for a given symbol (sorts from local data store)
    //         (RETURNED ITEM MUST BE FREED)
    //         (returned data is a pointer array to class data, deleting the class will destroy data
    //         being pointed to)
    P_FINVIZ_VALUATION_ITEM * GetSortedValuationsForSymbol(char *symbol);

    // display class information
    BP_ERROR_T DisplayClassInfo();

};

#endif /* ST_FINVIZDB_H_ */
