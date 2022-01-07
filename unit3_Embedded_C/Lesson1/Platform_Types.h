
/**********************HEADER GUARD*********************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/**********************CPU DEPENDET*********************/
#define FALSE					0
#define TRUE 					1
#define CPU_TYPE_8 				8
#define CPU_TYPE_16 			16
#define CPU_TYPE_32 			32
#define CPU_TYPE_64 			64
#define MSB_FIRST				0
#define LSB_FIRST				1
#define HIGH_BYTE_FIRST			0
#define LOW_BYTE_FIRST			1
#define CPU_TYPE 				CPU_TYPE_16
#define CPU_BIT_ORDER 			LSB_FIRST
#define CPU_BYTE_ORDER 			HIGH_BYTE_FIRST
/*********************EXTRACT TYPES WIDTH**************/
#ifndef STDINT_H_
#define STDINT_H_
typedef signed char 			int8_t;
typedef unsigned char 			uint8_t;
typedef short		 			int16_t;
typedef unsigned short			uint16_t;
typedef int						int32_t;
typedef unsigned int			uint32_t;
typedef long long				int64_t;
typedef unsigned long long		uint64_t;
#endif 
/*********************AUTOSAR TYPE DEFENETIONS*************/

typedef *void					VoidPtr;
typedef int8_t 					sint8;
typedef uint8_t 				uint8;
typedef int16_t 				sint16;
typedef uint16_t				uint16;
typedef int32_t					sint32;
typedef uint32_t				uint32;
typedef int64_t					sint64;
typedef uint64_t				uint64;
typedef float					float32;
typedef double					float64;


#endif