#include "../interpreter.h"
#include "hello.h"


const char demo_Defs[] = "\
struct car_info_t { int year; int wheels; int door; char brand[16];};\
typedef enum _MY_ENUM{ ENUM_0, ENUM_1, ENUM_2, ENUM_LAST}MY_ENUM; \
";

void Csay_myname(struct ParseState *Parser, struct Value *ReturnValue,
	struct Value **Param, int NumArgs)
{
    char *CharPtr = (char*)Param[0]->Val->Pointer;
    ReturnValue->Val->Integer = say_myname(CharPtr, Param[1]->Val->Integer);
}

void Cmy_car(struct ParseState *Parser, struct Value *ReturnValue,
	struct Value **Param, int NumArgs)
{
    my_car(Param[0]->Val->Pointer);
}

void Cshow_enum(struct ParseState *Parser, struct Value *ReturnValue,
	struct Value **Param, int NumArgs)
{
    show_enum(Param[0]->Val->Integer);
}

/* list of all library functions and their prototypes */
struct LibraryFunction demo_Functions[] =
{
    {Csay_myname, "int say_myname(char *, int);"},
    {Cmy_car, "void my_car(struct car_info_t *);"},
    {Cshow_enum, "void show_enum(MY_ENUM in);"},
    {NULL, NULL}
};

void demo_SetupFunc(Picoc *pc)
{
    //IncludeRegister(pc, "hello.h", &demo_SetupFunc, &demo_Functions[0], demo_Defs);
}