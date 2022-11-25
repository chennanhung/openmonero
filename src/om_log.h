#ifndef OM_LOG_H
#define OM_LOG_H

#define OPENMONERO_LOG_CATEGORY "OM"

#define OMINFO  CLOG(INFO, OPENMONERO_LOG_CATEGORY)
#define OMWARN  CLOG(WARNING, OPENMONERO_LOG_CATEGORY)
#define OMERROR CLOG(ERROR, OPENMONERO_LOG_CATEGORY)

//#define OMVLOG1  CVLOG(1, OPENMONERO_LOG_CATEGORY)
//#define OMVLOG2  CVLOG(2, OPENMONERO_LOG_CATEGORY)
//#define OMVLOG3  CVLOG(3, OPENMONERO_LOG_CATEGORY)
//#define OMVLOG4  CVLOG(4, OPENMONERO_LOG_CATEGORY)

#define OMVLOG1  CLOG(INFO, OPENMONERO_LOG_CATEGORY)
#define OMVLOG2  CLOG(INFO, OPENMONERO_LOG_CATEGORY)
#define OMVLOG3  CLOG(INFO, OPENMONERO_LOG_CATEGORY)
#define OMVLOG4  CLOG(INFO, OPENMONERO_LOG_CATEGORY)

#define OMINFO_IF(cond)  CLOG_IF(cond, INFO, OPENMONERO_LOG_CATEGORY)
#define OMWARN_IF(cond)  CLOG_IF(cond, WARNING, OPENMONERO_LOG_CATEGORY)
#define OMERROR_IF(cond) CLOG_IF(cond, ERROR, OPENMONERO_LOG_CATEGORY)


#endif // OM_LOG_H  
