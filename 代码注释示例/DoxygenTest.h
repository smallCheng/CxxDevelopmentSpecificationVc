/******************************************************************************
* Copyright(c) 2000-3000 Company Name                                        *
* All rights reserved.                                                       *
*                                                                            *
* @license                                                                   *
*                                                                            *
*****************************************************************************/
/**
* @file		文件名
* @brief	简要注释
* @details	详细注释
* @version	版本
* @author	作者
* @email	邮箱
* @date		日期
*
*
* Change History:
* @author	
* @email
* @date
* @brief
*
*/
#pragma once

//-------------------------------------------------------------------
//	简要注释
//-------------------------------------------------------------------
#define PI 3.14
#define MAX 10000
#define MIN 0
#define ID 1024

/**
* @brief	简要注释
* @details	详细注释
*/
namespace doxygentest
{
	/**
	* @class	类名
	* @brief	简要注释
	* @details	详细注释
	* @author	作者
	* @note		用来描述一些注意事项
	*
	*/
	class CDoxygenTest
	{
	public:
		CDoxygenTest();
		~CDoxygenTest();
	private:
		//简要说明(单行注释)
		int m_num;	///< 变量注释
	public:
		/**
		* @brief		简要注释
		* @details		详细注释
		*
		* @param[in]	parameter_1	（输入参数）
		* @param[out]	parameter_2	（输出参数）
		* @return		函数返回值描述
		* @retval		描述返回值意义	true
		* @retval		描述返回值意义	false
		*
		* @note			用来描述一些注意事项
		* @remarks		备注
		*/
		bool SetNum(int intNum);
	};

	/**
	* @struct	结构名
	* @brief	简要注释
	* @details	详细注释
	* @author	作者
	* @note		用来描述一些注意事项
	*
	*/
	struct MyStruct
	{
		int intVar1;	///< 变量注释
		int intVar2;	///< 变量注释
	};

	/**
	* @enum		枚举名
	* @brief	简要注释
	* @details	详细注释
	* @author	作者
	* @note		用来描述一些注意事项
	*
	*/
	enum MyEnum
	{
		red,	///< 红色
		green,	///< 绿色
		blue	///< 蓝色
	};
}

