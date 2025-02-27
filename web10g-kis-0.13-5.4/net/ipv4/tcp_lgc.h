#ifndef _TCP_LGC_H
#define _TCP_LGC_H

#include <linux/types.h>

#define LGC_LUT_SIZE    65536
extern const u32 lgc_log_lut[LGC_LUT_SIZE];
extern const u32 lgc_exp_lut[LGC_LUT_SIZE];

inline u32 lgc_log_lut_lookup(u16);
inline u32 lgc_exp_lut_lookup(u16);

#endif
