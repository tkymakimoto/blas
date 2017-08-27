/*
 * config.h
 *
 *  Created on: 2017/08/27
 *      Author: tmakimoto
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#ifndef FLOAT_DEFINITION
#	define FLOAT_DEFINITION __SIZEOF_FLOAT__
#endif

#if FLOAT_DEFINITION == __SIZEOF_FLOAT__
#	define FLOAT float
#	define PREFIX_FLT s
#
#elif FLOAT_DEFINITION == __SIZEOF_DOUBLE__
#	define FLOAT double
#	define PREFIX_FLT d
#
#elif FLOAT_DEFINITION == __SIZEOF_LONG_DOUBLE__
#	define FLOAT long double
#	define PREFIX_FLT l
#endif

#endif /* CONFIG_H_ */
