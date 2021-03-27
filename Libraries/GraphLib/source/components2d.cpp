////////// components2d //////////////////////////////////////////////////////
// Авторы   : Баталов Семен, Зарина Максудова, Дарья Белоусова              //
// Дата     : ??.??.2020                                                    //
//////////////////////////////////////////////////////////////////////////////

#include "components2d.h"

using namespace graph;

////////// class KeyStatus ///////////////////////////////////////////////////
// Описание : components2d.h                                                //
//////////////////////////////////////////////////////////////////////////////

// (1) Конструктор
KeyStatus::KeyStatus()
{
    clear();
}

// (4) Установка значений по умолчанию, завершение работы
void KeyStatus::clear()
{
    num1       = false;
    num2       = false;
    num3       = false;
    space = false;
}

////////// class MouseStatus /////////////////////////////////////////////////
// Описание : components2d.h                                                //
//////////////////////////////////////////////////////////////////////////////

// (1) Конструктор
MouseStatus::MouseStatus()
{
    clear();
}

// (4) Установка значений по умолчанию, завершение работы
void MouseStatus::clear()
{
    lButton = false;
    rButton = false;
    x       = 0;
    y       = 0;
    inside  = false;
}

////////// class WindowStatus ////////////////////////////////////////////////
// Описание : components2d.h                                                //
//////////////////////////////////////////////////////////////////////////////

// (1) Конструктор
WindowStatus::WindowStatus()
{
    clear();
}

// (4) Установка значений по умолчанию, завершение работы
void WindowStatus::clear()
{
    closed  = false;
    resized = false;
}

////////// class Status //////////////////////////////////////////////////////
// Описание : components2d.h                                                //
//////////////////////////////////////////////////////////////////////////////

// (4) Установка значений по умолчанию, завершение работы
void Status::clear()
{
    key.clear();
    mouse.clear();
    window.clear();
}
