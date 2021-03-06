﻿/***********************************************************************************
**
** RenderTextObject.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef RENDERTEXTOBJECT_H
#define RENDERTEXTOBJECT_H
//----------------------------------------------------------------------------------
#include "../RenderObject.h"
//----------------------------------------------------------------------------------
//Класс текста объекта мира
class CRenderTextObject : public CRenderObject
{
	SETGET(bool, Transparent);

public:
	CRenderTextObject();
	virtual ~CRenderTextObject();

	CRenderTextObject *m_NextDraw;
	CRenderTextObject *m_PrevDraw;

	//Вытащить из очереди
	void UnlinkDraw();

	//Наверх очереди
	void ToTop();
};
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
