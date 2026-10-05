  .syntax unified
  .cpu cortex-m4
  .fpu softvfp
  .thumb



    .section  .text
	.global  retPCasm
    .thumb_func


retPCasm: /* uint32_t retPCasm( void) */
	push	{r7}
	add	r7, sp, #0

	mov	r3, pc	// 	return PC;

	mov	r0, r3
	mov	sp, r7
	ldr.w	r7, [sp], #4
	bx	lr

