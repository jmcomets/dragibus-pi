#include <stdint.h>




/*typedef nécessaire pour que func_t est reconnu en bas dans les déclarations de fonctions*/
typedef void (*func_t) (void);


/*Variables globales*/

struct current_s
{
	struct ctx_s* ctx;

} current;


struct ctx_s
{
	/*process counter*/	
	uint32_t pc;

	/*stack pointeur*/	
	uint32_t sp;

};


void init_ctx ( struct ctx_s* ctx, func_t f, unsigned int stack_size );

void start_ctx ( struct ctx_s* ctx, func_t f );

