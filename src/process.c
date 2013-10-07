#include "allocateMemory.h"



#include "process.h"




void init_ctx ( struct ctx_s* ctx, func_t f, unsigned int stack_size )
{
	/*prendre l'adresse de la fonction f et la stocker dans pc*/
	ctx->pc = (uint32_t) f;

	/*réserver de la mémoire et stocker dans sp, parce que AllMem renvoie un pointeur*/
	ctx->sp = (uint32_t) AllocateMemory (stack_size) - stack_size;

	return;
}

void start_ctx ( struct ctx_s* ctx, func_t f )
{
	
	current.ctx = ctx;

	f();


	return;
}



