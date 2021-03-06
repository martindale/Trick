/*
 * $Id: DPC_column_info.hh 3313 2013-11-21 21:34:59Z lmlandry $
 */

#ifndef DPC_COLUMN_INFO_HH
#define DPC_COLUMN_INFO_HH
#include <string.h>
#include <iostream>
#include "../../units/include/Unit.hh"

class DPC_column_info {
public:
    DPC_column_info( DPM_var    * Var,
                     const char * Units_s,
                     int          DS_ix,
                     UCFn       * Conversion_fn) {
        var = Var;
        units = strdup(Units_s);
        ds_ix = DS_ix;
		time_conversion = Conversion_fn; 
    }

    DPM_var    *var;
    const char *units;
    int        ds_ix ;
    UCFn       *time_conversion;
};

#endif
