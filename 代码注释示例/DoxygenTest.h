/******************************************************************************
* Copyright(c) 2000-3000 Company Name                                        *
* All rights reserved.                                                       *
*                                                                            *
* @license                                                                   *
*                                                                            *
*****************************************************************************/
/**
* @file		�ļ���
* @brief	��Ҫע��
* @details	��ϸע��
* @version	�汾
* @author	����
* @email	����
* @date		����
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
//	��Ҫע��
//-------------------------------------------------------------------
#define PI 3.14
#define MAX 10000
#define MIN 0
#define ID 1024

/**
* @brief	��Ҫע��
* @details	��ϸע��
*/
namespace doxygentest
{
	/**
	* @class	����
	* @brief	��Ҫע��
	* @details	��ϸע��
	* @author	����
	* @note		��������һЩע������
	*
	*/
	class CDoxygenTest
	{
	public:
		CDoxygenTest();
		~CDoxygenTest();
	private:
		//��Ҫ˵��(����ע��)
		int m_num;	///< ����ע��
	public:
		/**
		* @brief		��Ҫע��
		* @details		��ϸע��
		*
		* @param[in]	parameter_1	�����������
		* @param[out]	parameter_2	�����������
		* @return		��������ֵ����
		* @retval		��������ֵ����	true
		* @retval		��������ֵ����	false
		*
		* @note			��������һЩע������
		* @remarks		��ע
		*/
		bool SetNum(int intNum);
	};

	/**
	* @struct	�ṹ��
	* @brief	��Ҫע��
	* @details	��ϸע��
	* @author	����
	* @note		��������һЩע������
	*
	*/
	struct MyStruct
	{
		int intVar1;	///< ����ע��
		int intVar2;	///< ����ע��
	};

	/**
	* @enum		ö����
	* @brief	��Ҫע��
	* @details	��ϸע��
	* @author	����
	* @note		��������һЩע������
	*
	*/
	enum MyEnum
	{
		red,	///< ��ɫ
		green,	///< ��ɫ
		blue	///< ��ɫ
	};
}

