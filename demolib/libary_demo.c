#include "../interpreter.h"
#include "hello.h"


const char demo_Defs[] = "\
struct car_info_t { int year; int wheels; int door; char brand[16];};\
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

/* list of all library functions and their prototypes */
struct LibraryFunction demo_Functions[] =
{
    {Csay_myname, "int say_myname(char *, int);"},
    {Cmy_car, "void my_car(struct car_info_t *);"},
    {NULL, NULL}
};

void demo_SetupFunc(Picoc *pc)
{
    //TypeCreateOpaqueStruct(pc, NULL, TableStrRegister(pc, "car_info_t"), sizeof(struct car_info_t));
}