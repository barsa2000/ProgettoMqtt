#ifndef __DEBUG_H
#define __DEBUG_H

#define __DEBUG 0

#if (__DEBUG == 1)
#define DEBUG_PRINTLN(a, b) Serial.println(a,b)
#define DEBUG_PRINTLN(a) Serial.println(a)
#define DEBUG_PRINT(a, b) Serial.print(a,b)
#define DEBUG_PRINT(a) Serial.print(a)
#elif(__DEBUG == 0)
#define DEBUG_PRINTLN(a, b)
#define DEBUG_PRINTLN(a) 
#define DEBUG_PRINT(a, b) 
#define DEBUG_PRINT(a) 
#endif


#endif //__DEBUG_H