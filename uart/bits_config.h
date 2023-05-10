﻿
#ifndef bits_config_H_
#define bits_config_H_


#define set_bit(reg,bit)            reg=(reg|(1<<bit))
#define clear_bit(reg,bit)           reg=(reg&(~(1<<bit)))
#define read_bit(reg,bit)              ((reg>>bit)&1)
#define toggel_bit(reg,bit)              reg=reg^(1<<bit)





#endif /* bits_config_H_ */