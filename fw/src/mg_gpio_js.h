/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MG_GPIO_JS_H_
#define CS_FW_SRC_MG_GPIO_JS_H_

#if MG_ENABLE_JS && MG_ENABLE_GPIO_API
struct v7;
void mg_gpio_api_setup(struct v7 *v7);
#endif

#endif /* CS_FW_SRC_MG_GPIO_JS_H_ */
