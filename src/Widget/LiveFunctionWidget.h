#pragma once
#ifndef __LiveFunctionWidget_H__
#define __LiveFunctionWidget_H__

class LiveFunctionWidget
	: public CompositeWidget
{
public:
	LiveFunctionWidget(Vector2n Position, TypingModule & TypingModule);
	~LiveFunctionWidget();

private:
	LiveFunctionWidget(const LiveFunctionWidget &) = delete;
	LiveFunctionWidget & operator = (const LiveFunctionWidget &) = delete;
};

#endif // __LiveFunctionWidget_H__