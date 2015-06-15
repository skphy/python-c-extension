#include "libmypy.h"

char hellofunc_docs[] = "Hello world description.";
char heymanfunc_docs[] = "Echo your name and passed number.";
char addfunc_docs[] = "Add two numbers function.";

PyMethodDef helloworld_funcs[] = {
	{	"hello",
		(PyCFunction)hello,
		METH_NOARGS,
		hellofunc_docs},
	{	"heyman",
		(PyCFunction)heyman,
		METH_VARARGS,
		heymanfunc_docs},
	{	"add",
		(PyCFunction)add,
		METH_VARARGS,
		addfunc_docs},

	{	NULL}
};

char helloworldmod_docs[] = "This is hello world module.";

PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	"helloworld",
	helloworldmod_docs,
	-1,
	helloworld_funcs,
	NULL,
	NULL,
	NULL,
	NULL
};

void PyInit_helloworld(void) {
	PyModule_Create(&helloworld_mod);
}
