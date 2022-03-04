	.text
	.file	"hello.cpp"
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90                         # -- Begin function __cxx_global_var_init
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movabsq	$_ZStL8__ioinit, %rdi
	callq	_ZNSt8ios_base4InitC1Ev
	movabsq	$_ZNSt8ios_base4InitD1Ev, %rdi
	movabsq	$_ZStL8__ioinit, %rsi
	movabsq	$__dso_handle, %rdx
	callq	__cxa_atexit
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc
                                        # -- End function
	.text
	.globl	_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE # -- Begin function _Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.p2align	4, 0x90
	.type	_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,@function
_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE: # @_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)                 # 8-byte Spill
	movq	%rdi, %rax
	movq	%rax, -32(%rbp)                 # 8-byte Spill
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, -20(%rbp)
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	movslq	-20(%rbp), %rax
	movq	%rax, -48(%rbp)                 # 8-byte Spill
	movq	-16(%rbp), %rdi
	callq	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
	movq	%rax, %rcx
	movq	-48(%rbp), %rax                 # 8-byte Reload
	cmpq	%rcx, %rax
	jae	.LBB1_4
# %bb.2:                                #   in Loop: Header=BB1_1 Depth=1
	movq	-16(%rbp), %rdi
	movslq	-20(%rbp), %rsi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
	movsbl	(%rax), %edi
	callq	toupper
                                        # kill: def $al killed $al killed $eax
	movb	%al, -49(%rbp)                  # 1-byte Spill
	movq	-16(%rbp), %rdi
	movslq	-20(%rbp), %rsi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
	movb	-49(%rbp), %cl                  # 1-byte Reload
	movb	%cl, (%rax)
# %bb.3:                                #   in Loop: Header=BB1_1 Depth=1
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	jmp	.LBB1_1
.LBB1_4:
	movq	-40(%rbp), %rdi                 # 8-byte Reload
	movq	-16(%rbp), %rsi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	movq	-32(%rbp), %rax                 # 8-byte Reload
	addq	$64, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .Lfunc_end1-_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.cfi_endproc
                                        # -- End function
	.globl	_Z10isPositivei                 # -- Begin function _Z10isPositivei
	.p2align	4, 0x90
	.type	_Z10isPositivei,@function
_Z10isPositivei:                        # @_Z10isPositivei
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jge	.LBB2_2
# %bb.1:
	movb	$0, -1(%rbp)
	jmp	.LBB2_6
.LBB2_2:
	cmpl	$0, -8(%rbp)
	jl	.LBB2_4
# %bb.3:
	movb	$1, -1(%rbp)
	jmp	.LBB2_6
.LBB2_4:
	jmp	.LBB2_5
.LBB2_5:
	ud2
.LBB2_6:
	movb	-1(%rbp), %al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end2:
	.size	_Z10isPositivei, .Lfunc_end2-_Z10isPositivei
	.cfi_endproc
                                        # -- End function
	.globl	_Z12fivePlusfivev               # -- Begin function _Z12fivePlusfivev
	.p2align	4, 0x90
	.type	_Z12fivePlusfivev,@function
_Z12fivePlusfivev:                      # @_Z12fivePlusfivev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$10, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end3:
	.size	_Z12fivePlusfivev, .Lfunc_end3-_Z12fivePlusfivev
	.cfi_endproc
                                        # -- End function
	.globl	_Z6isMalec                      # -- Begin function _Z6isMalec
	.p2align	4, 0x90
	.type	_Z6isMalec,@function
_Z6isMalec:                             # @_Z6isMalec
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movb	%dil, %al
	movb	%al, -2(%rbp)
	movsbl	-2(%rbp), %edi
	callq	toupper
                                        # kill: def $al killed $al killed $eax
	movb	%al, -2(%rbp)
	movsbl	-2(%rbp), %eax
	cmpl	$77, %eax
	jne	.LBB4_2
# %bb.1:
	movb	$1, -1(%rbp)
	jmp	.LBB4_6
.LBB4_2:
	movsbl	-2(%rbp), %eax
	cmpl	$70, %eax
	jne	.LBB4_4
# %bb.3:
	movb	$0, -1(%rbp)
	jmp	.LBB4_6
.LBB4_4:
	jmp	.LBB4_5
.LBB4_5:
	movb	$0, -1(%rbp)
.LBB4_6:
	movb	-1(%rbp), %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end4:
	.size	_Z6isMalec, .Lfunc_end4-_Z6isMalec
	.cfi_endproc
                                        # -- End function
	.globl	_Z7prarrayPiRi                  # -- Begin function _Z7prarrayPiRi
	.p2align	4, 0x90
	.type	_Z7prarrayPiRi,@function
_Z7prarrayPiRi:                         # @_Z7prarrayPiRi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	xorl	%eax, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end5:
	.size	_Z7prarrayPiRi, .Lfunc_end5-_Z7prarrayPiRi
	.cfi_endproc
                                        # -- End function
	.section	.rodata.cst4,"aM",@progbits,4
	.p2align	2                               # -- Begin function main
.LCPI6_0:
	.long	0x40b16873                      # float 5.54400015
.LCPI6_1:
	.long	0x3fc00000                      # float 1.5
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3
.LCPI6_2:
	.quad	6881500230622117888             # 0x5f80000000000000
	.text
	.globl	main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception0
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$944, %rsp                      # imm = 0x3B0
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$_ZSt4cout, %edi
	movq	%rdi, -552(%rbp)                # 8-byte Spill
	movl	$.L.str, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rsi, -544(%rbp)                # 8-byte Spill
	callq	_ZNSolsEPFRSoS_E
	movq	_ZSt4cout(%rip), %rax
	movq	-24(%rax), %rax
	leaq	_ZSt4cout(%rax), %rdi
	movl	$5, %esi
	callq	_ZNSt8ios_base9precisionEl
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	$.L.str.1, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	$.L.str.2, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	$24, %esi
	movl	%esi, -560(%rbp)                # 4-byte Spill
	callq	_ZNSolsEi
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	.LCPI6_0(%rip), %xmm0           # xmm0 = mem[0],zero,zero,zero
	movss	%xmm0, -568(%rbp)               # 4-byte Spill
	callq	_ZSt3cosf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-568(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt4sqrtf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	.LCPI6_1(%rip), %xmm0           # xmm0 = mem[0],zero,zero,zero
	movss	%xmm0, -564(%rbp)               # 4-byte Spill
	callq	_ZSt3sinf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-564(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt3logf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movl	$10, %edi
	movl	$100, %esi
	callq	_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEd
	movq	%rax, %rdi
	movl	$.L.str.3, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-564(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt4ceilf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	%rax, %rdi
	movl	$.L.str.4, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-564(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt5floorf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	%rax, %rdi
	movl	$.L.str.5, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-564(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt5roundf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	%rax, %rdi
	movl	$.L.str.6, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movss	-564(%rbp), %xmm0               # 4-byte Reload
                                        # xmm0 = mem[0],zero,zero,zero
	callq	_ZSt3absf
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEf
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-552(%rbp), %rdi                # 8-byte Reload
	xorl	%esi, %esi
	movl	%esi, -556(%rbp)                # 4-byte Spill
	callq	_ZNSolsEi
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	$3, %esi
	callq	_ZNSolsEi
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	$.L.str.7, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	movl	$68, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movq	%rax, %rdi
	movl	$.L.str.8, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	movl	$.L.str.9, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	movl	-560(%rbp), %esi                # 4-byte Reload
	movq	-552(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSolsEi
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
                                        # kill: def $rcx killed $rax
	movl	-556(%rbp), %eax                # 4-byte Reload
	movl	%eax, %edi
	callq	time
	movl	%eax, %edi
	callq	srand
	callq	rand
	movl	%eax, -20(%rbp)
	callq	rand
	movq	-552(%rbp), %rdi                # 8-byte Reload
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$954437177, %rax, %rdx          # imm = 0x38E38E39
	movq	%rdx, %rax
	shrq	$63, %rax
                                        # kill: def $eax killed $eax killed $rax
	sarq	$35, %rdx
                                        # kill: def $edx killed $edx killed $rdx
	addl	%eax, %edx
	shll	$2, %edx
                                        # implicit-def: $rax
	movl	%edx, %eax
	leal	(%rax,%rax,8), %edx
                                        # implicit-def: $rax
	movl	%ecx, %eax
	negl	%edx
                                        # implicit-def: $rcx
	movl	%edx, %ecx
	leal	15(%rax,%rcx), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %esi
	callq	_ZNSolsEi
	movq	-544(%rbp), %rsi                # 8-byte Reload
	movq	%rax, %rdi
	callq	_ZNSolsEPFRSoS_E
	leaq	-184(%rbp), %rax
	movq	%rax, -536(%rbp)                # 8-byte Spill
	movb	$1, -241(%rbp)
	movq	%rax, -192(%rbp)
	leaq	-200(%rbp), %rdi
	movq	%rdi, -528(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-536(%rbp), %rdi                # 8-byte Reload
	movq	-528(%rbp), %rdx                # 8-byte Reload
.Ltmp0:
	movl	$.L.str.10, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp1:
	jmp	.LBB6_1
.LBB6_1:
	movq	-536(%rbp), %rax                # 8-byte Reload
	addq	$32, %rax
	movq	%rax, -584(%rbp)                # 8-byte Spill
	movq	%rax, -192(%rbp)
	leaq	-216(%rbp), %rdi
	movq	%rdi, -576(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-584(%rbp), %rdi                # 8-byte Reload
	movq	-576(%rbp), %rdx                # 8-byte Reload
.Ltmp3:
	movl	$.L.str.11, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp4:
	jmp	.LBB6_2
.LBB6_2:
	movq	-584(%rbp), %rax                # 8-byte Reload
	addq	$32, %rax
	movq	%rax, -600(%rbp)                # 8-byte Spill
	movq	%rax, -192(%rbp)
	leaq	-224(%rbp), %rdi
	movq	%rdi, -592(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-600(%rbp), %rdi                # 8-byte Reload
	movq	-592(%rbp), %rdx                # 8-byte Reload
.Ltmp6:
	movl	$.L.str.12, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp7:
	jmp	.LBB6_3
.LBB6_3:
	movq	-600(%rbp), %rax                # 8-byte Reload
	addq	$32, %rax
	movq	%rax, -616(%rbp)                # 8-byte Spill
	movq	%rax, -192(%rbp)
	leaq	-232(%rbp), %rdi
	movq	%rdi, -608(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-616(%rbp), %rdi                # 8-byte Reload
	movq	-608(%rbp), %rdx                # 8-byte Reload
.Ltmp9:
	movl	$.L.str.13, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp10:
	jmp	.LBB6_4
.LBB6_4:
	movq	-616(%rbp), %rax                # 8-byte Reload
	addq	$32, %rax
	movq	%rax, -632(%rbp)                # 8-byte Spill
	movq	%rax, -192(%rbp)
	leaq	-240(%rbp), %rdi
	movq	%rdi, -624(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-632(%rbp), %rdi                # 8-byte Reload
	movq	-624(%rbp), %rdx                # 8-byte Reload
.Ltmp12:
	movl	$.L.str.14, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp13:
	jmp	.LBB6_5
.LBB6_5:
	movb	$0, -241(%rbp)
	leaq	-240(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	leaq	-232(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	leaq	-224(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	leaq	-216(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	leaq	-200(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	movq	.L__const.main.ID, %rax
	movq	%rax, -264(%rbp)
	movq	.L__const.main.ID+8, %rax
	movq	%rax, -256(%rbp)
	movl	.L__const.main.ID+16, %eax
	movl	%eax, -248(%rbp)
	movq	$0, -272(%rbp)
.LBB6_6:                                # =>This Inner Loop Header: Depth=1
	cmpq	$5, -272(%rbp)
	jae	.LBB6_35
# %bb.7:                                #   in Loop: Header=BB6_6 Depth=1
.Ltmp93:
	movl	$_ZSt4cout, %edi
	movl	$_ZSt4leftRSt8ios_base, %esi
	callq	_ZNSolsEPFRSt8ios_baseS0_E
.Ltmp94:
	movq	%rax, -640(%rbp)                # 8-byte Spill
	jmp	.LBB6_8
.LBB6_8:                                #   in Loop: Header=BB6_6 Depth=1
.Ltmp95:
	movl	$15, %edi
	callq	_ZSt4setwi
.Ltmp96:
	movl	%eax, -644(%rbp)                # 4-byte Spill
	jmp	.LBB6_9
.LBB6_9:                                #   in Loop: Header=BB6_6 Depth=1
	movq	-640(%rbp), %rdi                # 8-byte Reload
	movl	-644(%rbp), %eax                # 4-byte Reload
	movl	%eax, -280(%rbp)
	movl	-280(%rbp), %esi
.Ltmp97:
	callq	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
.Ltmp98:
	movq	%rax, -656(%rbp)                # 8-byte Spill
	jmp	.LBB6_10
.LBB6_10:                               #   in Loop: Header=BB6_6 Depth=1
	movq	-272(%rbp), %rsi
	leaq	-264(%rbp), %rdi
	callq	_ZNSt5arrayIiLm5EEixEm
	movl	(%rax), %esi
.Ltmp99:
	leaq	-344(%rbp), %rdi
	callq	_ZNSt7__cxx119to_stringEi
.Ltmp100:
	jmp	.LBB6_11
.LBB6_11:                               #   in Loop: Header=BB6_6 Depth=1
.Ltmp102:
	movl	$.L.str.15, %edx
	leaq	-312(%rbp), %rdi
	leaq	-344(%rbp), %rsi
	callq	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
.Ltmp103:
	jmp	.LBB6_12
.LBB6_12:                               #   in Loop: Header=BB6_6 Depth=1
.Ltmp105:
	movq	-656(%rbp), %rdi                # 8-byte Reload
	leaq	-312(%rbp), %rsi
	callq	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
.Ltmp106:
	movq	%rax, -664(%rbp)                # 8-byte Spill
	jmp	.LBB6_13
.LBB6_13:                               #   in Loop: Header=BB6_6 Depth=1
.Ltmp107:
	movq	-664(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt5rightRSt8ios_base, %esi
	callq	_ZNSolsEPFRSt8ios_baseS0_E
.Ltmp108:
	movq	%rax, -672(%rbp)                # 8-byte Spill
	jmp	.LBB6_14
.LBB6_14:                               #   in Loop: Header=BB6_6 Depth=1
	movq	-272(%rbp), %rsi
	leaq	-184(%rbp), %rdi
	callq	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm
	movq	-672(%rbp), %rdi                # 8-byte Reload
	movq	%rax, %rsi
.Ltmp109:
	callq	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
.Ltmp110:
	movq	%rax, -680(%rbp)                # 8-byte Spill
	jmp	.LBB6_15
.LBB6_15:                               #   in Loop: Header=BB6_6 Depth=1
.Ltmp111:
	movq	-680(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp112:
	jmp	.LBB6_16
.LBB6_16:                               #   in Loop: Header=BB6_6 Depth=1
	leaq	-312(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-344(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
# %bb.17:                               #   in Loop: Header=BB6_6 Depth=1
	movq	-272(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -272(%rbp)
	jmp	.LBB6_6
.LBB6_18:
.Ltmp2:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_26
.LBB6_19:
.Ltmp5:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_25
.LBB6_20:
.Ltmp8:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_24
.LBB6_21:
.Ltmp11:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_23
.LBB6_22:
.Ltmp14:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	leaq	-240(%rbp), %rdi
	callq	_ZNSaIcED1Ev
.LBB6_23:
	leaq	-232(%rbp), %rdi
	callq	_ZNSaIcED1Ev
.LBB6_24:
	leaq	-224(%rbp), %rdi
	callq	_ZNSaIcED1Ev
.LBB6_25:
	leaq	-216(%rbp), %rdi
	callq	_ZNSaIcED1Ev
.LBB6_26:
	leaq	-200(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	testb	$1, -241(%rbp)
	jne	.LBB6_27
	jmp	.LBB6_30
.LBB6_27:
	movq	-536(%rbp), %rcx                # 8-byte Reload
	movq	-192(%rbp), %rax
	cmpq	%rax, %rcx
	movq	%rax, -688(%rbp)                # 8-byte Spill
	je	.LBB6_29
.LBB6_28:                               # =>This Inner Loop Header: Depth=1
	movq	-688(%rbp), %rdi                # 8-byte Reload
	addq	$-32, %rdi
	movq	%rdi, -696(%rbp)                # 8-byte Spill
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	-536(%rbp), %rcx                # 8-byte Reload
	movq	-696(%rbp), %rax                # 8-byte Reload
	cmpq	%rcx, %rax
	movq	%rax, -688(%rbp)                # 8-byte Spill
	jne	.LBB6_28
.LBB6_29:
	jmp	.LBB6_30
.LBB6_30:
	jmp	.LBB6_95
.LBB6_31:
.Ltmp101:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_94
.LBB6_32:
.Ltmp104:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	jmp	.LBB6_34
.LBB6_33:
.Ltmp113:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	leaq	-312(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB6_34:
	leaq	-344(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.LBB6_94
.LBB6_35:
.Ltmp15:
	movl	$5, %edi
	callq	_ZSt12setprecisioni
.Ltmp16:
	movl	%eax, -700(%rbp)                # 4-byte Spill
	jmp	.LBB6_36
.LBB6_36:
	movl	-700(%rbp), %eax                # 4-byte Reload
	movl	%eax, -352(%rbp)
	movl	-352(%rbp), %esi
.Ltmp17:
	movl	$_ZSt4cout, %edi
	callq	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
.Ltmp18:
	movq	%rax, -712(%rbp)                # 8-byte Spill
	jmp	.LBB6_37
.LBB6_37:
.Ltmp19:
	movq	-712(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt7showposRSt8ios_base, %esi
	callq	_ZNSolsEPFRSt8ios_baseS0_E
.Ltmp20:
	movq	%rax, -720(%rbp)                # 8-byte Spill
	jmp	.LBB6_38
.LBB6_38:
.Ltmp21:
	movq	-720(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt9showpointRSt8ios_base, %esi
	callq	_ZNSolsEPFRSt8ios_baseS0_E
.Ltmp22:
	jmp	.LBB6_39
.LBB6_39:
.Ltmp23:
	movl	$8, %edi
	callq	_Znwm
.Ltmp24:
	movq	%rax, -728(%rbp)                # 8-byte Spill
	jmp	.LBB6_40
.LBB6_40:
	movq	-728(%rbp), %rax                # 8-byte Reload
	movabsq	$4618328827877759386, %rcx      # imm = 0x401799999999999A
	movq	%rcx, (%rax)
	movq	%rax, -360(%rbp)
.Ltmp25:
	movl	$_ZSt4cout, %edi
	leaq	-360(%rbp), %rsi
	callq	_ZNSolsEPKv
.Ltmp26:
	movq	%rax, -736(%rbp)                # 8-byte Spill
	jmp	.LBB6_41
.LBB6_41:
.Ltmp27:
	movq	-736(%rbp), %rdi                # 8-byte Reload
	movl	$.L.str.16, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp28:
	movq	%rax, -744(%rbp)                # 8-byte Spill
	jmp	.LBB6_42
.LBB6_42:
	movq	-744(%rbp), %rdi                # 8-byte Reload
	movq	-360(%rbp), %rsi
.Ltmp29:
	callq	_ZNSolsEPKv
.Ltmp30:
	movq	%rax, -752(%rbp)                # 8-byte Spill
	jmp	.LBB6_43
.LBB6_43:
.Ltmp31:
	movq	-752(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp32:
	jmp	.LBB6_44
.LBB6_44:
	movq	-360(%rbp), %rax
	movsd	(%rax), %xmm0                   # xmm0 = mem[0],zero
.Ltmp33:
	movl	$_ZSt4cout, %edi
	callq	_ZNSolsEd
.Ltmp34:
	movq	%rax, -760(%rbp)                # 8-byte Spill
	jmp	.LBB6_45
.LBB6_45:
.Ltmp35:
	movq	-760(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp36:
	jmp	.LBB6_46
.LBB6_46:
	movq	-360(%rbp), %rax
	movq	%rax, -768(%rbp)                # 8-byte Spill
	cmpq	$0, %rax
	je	.LBB6_48
# %bb.47:
	movq	-768(%rbp), %rdi                # 8-byte Reload
	callq	_ZdlPv
.LBB6_48:
.Ltmp37:
	movl	$_ZSt4cout, %edi
	leaq	-360(%rbp), %rsi
	callq	_ZNSolsEPKv
.Ltmp38:
	movq	%rax, -776(%rbp)                # 8-byte Spill
	jmp	.LBB6_49
.LBB6_49:
.Ltmp39:
	movq	-776(%rbp), %rdi                # 8-byte Reload
	movl	$.L.str.16, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp40:
	movq	%rax, -784(%rbp)                # 8-byte Spill
	jmp	.LBB6_50
.LBB6_50:
	movq	-784(%rbp), %rdi                # 8-byte Reload
	movq	-360(%rbp), %rsi
.Ltmp41:
	callq	_ZNSolsEPKv
.Ltmp42:
	movq	%rax, -792(%rbp)                # 8-byte Spill
	jmp	.LBB6_51
.LBB6_51:
.Ltmp43:
	movq	-792(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp44:
	jmp	.LBB6_52
.LBB6_52:
	movq	-360(%rbp), %rax
	movsd	(%rax), %xmm0                   # xmm0 = mem[0],zero
.Ltmp45:
	movl	$_ZSt4cout, %edi
	callq	_ZNSolsEd
.Ltmp46:
	movq	%rax, -800(%rbp)                # 8-byte Spill
	jmp	.LBB6_53
.LBB6_53:
.Ltmp47:
	movq	-800(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp48:
	jmp	.LBB6_54
.LBB6_54:
	movl	$100, -364(%rbp)
	movslq	-364(%rbp), %rax
	movl	$8, %ecx
	mulq	%rcx
	movq	%rax, %rdi
	movq	$-1, %rax
	cmovoq	%rax, %rdi
.Ltmp49:
	callq	_Znam
.Ltmp50:
	movq	%rax, -808(%rbp)                # 8-byte Spill
	jmp	.LBB6_55
.LBB6_55:
	movq	-808(%rbp), %rax                # 8-byte Reload
	movq	%rax, -376(%rbp)
.Ltmp51:
	movl	$_ZSt4cout, %edi
	movl	$.L.str.17, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp52:
	movq	%rax, -816(%rbp)                # 8-byte Spill
	jmp	.LBB6_56
.LBB6_56:
.Ltmp53:
	movq	-816(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp54:
	jmp	.LBB6_57
.LBB6_57:
	movq	$0, -384(%rbp)
.LBB6_58:                               # =>This Inner Loop Header: Depth=1
	movq	-384(%rbp), %rax
	movslq	-364(%rbp), %rcx
	cmpq	%rcx, %rax
	jae	.LBB6_66
# %bb.59:                               #   in Loop: Header=BB6_58 Depth=1
.Ltmp87:
	movl	$16, %edi
	callq	_Znwm
.Ltmp88:
	movq	%rax, -824(%rbp)                # 8-byte Spill
	jmp	.LBB6_60
.LBB6_60:                               #   in Loop: Header=BB6_58 Depth=1
	movq	-824(%rbp), %rax                # 8-byte Reload
	movq	%rax, %rdx
	movq	-384(%rbp), %rcx
	movq	%rcx, -520(%rbp)
	testq	%rcx, %rcx
	sets	%cl
	movzbl	%cl, %ecx
                                        # kill: def $rcx killed $ecx
	fildll	-520(%rbp)
	flds	.LCPI6_2(,%rcx,4)
	faddp	%st, %st(1)
	fstpt	(%rax)
	movq	-376(%rbp), %rax
	movq	-384(%rbp), %rcx
	movq	%rdx, (%rax,%rcx,8)
	movq	-376(%rbp), %rax
	movq	-384(%rbp), %rcx
	cmpq	$0, (%rax,%rcx,8)
	jne	.LBB6_64
# %bb.61:                               #   in Loop: Header=BB6_58 Depth=1
.Ltmp89:
	movl	$_ZSt4cout, %edi
	movl	$.L.str.18, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp90:
	movq	%rax, -832(%rbp)                # 8-byte Spill
	jmp	.LBB6_62
.LBB6_62:                               #   in Loop: Header=BB6_58 Depth=1
.Ltmp91:
	movq	-832(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp92:
	jmp	.LBB6_63
.LBB6_63:                               #   in Loop: Header=BB6_58 Depth=1
	jmp	.LBB6_64
.LBB6_64:                               #   in Loop: Header=BB6_58 Depth=1
	jmp	.LBB6_65
.LBB6_65:                               #   in Loop: Header=BB6_58 Depth=1
	movq	-384(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -384(%rbp)
	jmp	.LBB6_58
.LBB6_66:
.Ltmp55:
	movl	$_ZSt4cout, %edi
	movl	$.L.str.19, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp56:
	movq	%rax, -840(%rbp)                # 8-byte Spill
	jmp	.LBB6_67
.LBB6_67:
.Ltmp57:
	movq	-840(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp58:
	jmp	.LBB6_68
.LBB6_68:
	movq	$0, -392(%rbp)
.LBB6_69:                               # =>This Inner Loop Header: Depth=1
	movq	-392(%rbp), %rax
	movslq	-364(%rbp), %rcx
	cmpq	%rcx, %rax
	jae	.LBB6_74
# %bb.70:                               #   in Loop: Header=BB6_69 Depth=1
	movq	-376(%rbp), %rax
	movq	-392(%rbp), %rcx
	movq	(%rax,%rcx,8), %rax
	movq	%rax, -848(%rbp)                # 8-byte Spill
	cmpq	$0, %rax
	je	.LBB6_72
# %bb.71:                               #   in Loop: Header=BB6_69 Depth=1
	movq	-848(%rbp), %rdi                # 8-byte Reload
	callq	_ZdlPv
.LBB6_72:                               #   in Loop: Header=BB6_69 Depth=1
	jmp	.LBB6_73
.LBB6_73:                               #   in Loop: Header=BB6_69 Depth=1
	movq	-392(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -392(%rbp)
	jmp	.LBB6_69
.LBB6_74:
	movq	-376(%rbp), %rax
	movq	%rax, -856(%rbp)                # 8-byte Spill
	cmpq	$0, %rax
	je	.LBB6_76
# %bb.75:
	movq	-856(%rbp), %rdi                # 8-byte Reload
	callq	_ZdaPv
.LBB6_76:
.Ltmp59:
	movl	$_ZSt4cout, %edi
	movl	$.L.str.20, %esi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp60:
	movq	%rax, -864(%rbp)                # 8-byte Spill
	jmp	.LBB6_77
.LBB6_77:
	callq	_Z12fivePlusfivev
	movq	-864(%rbp), %rdi                # 8-byte Reload
	movl	%eax, %esi
.Ltmp61:
	callq	_ZNSolsEi
.Ltmp62:
	movq	%rax, -872(%rbp)                # 8-byte Spill
	jmp	.LBB6_78
.LBB6_78:
.Ltmp63:
	movq	-872(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp64:
	jmp	.LBB6_79
.LBB6_79:
.Ltmp65:
	movl	$32, %edi
	callq	_Znwm
.Ltmp66:
	movq	%rax, -880(%rbp)                # 8-byte Spill
	jmp	.LBB6_80
.LBB6_80:
	movq	-880(%rbp), %rax                # 8-byte Reload
	movb	$1, -409(%rbp)
	movq	%rax, -896(%rbp)                # 8-byte Spill
	leaq	-408(%rbp), %rdi
	movq	%rdi, -888(%rbp)                # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-880(%rbp), %rdi                # 8-byte Reload
	movq	-888(%rbp), %rdx                # 8-byte Reload
.Ltmp67:
	movl	$.L.str.21, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.Ltmp68:
	jmp	.LBB6_81
.LBB6_81:
	movb	$0, -409(%rbp)
	leaq	-408(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	movq	-896(%rbp), %rax                # 8-byte Reload
	movq	%rax, -400(%rbp)
	movl	$18, -416(%rbp)
	leaq	-416(%rbp), %rax
	movq	%rax, -424(%rbp)
	movabsq	$4610695226509366395, %rax      # imm = 0x3FFC7AE147AE147B
	movq	%rax, -432(%rbp)
.Ltmp70:
	callq	_Z14allocateStringB5cxx11v
.Ltmp71:
	movq	%rax, -904(%rbp)                # 8-byte Spill
	jmp	.LBB6_82
.LBB6_82:
	movq	-904(%rbp), %rax                # 8-byte Reload
	movq	%rax, -440(%rbp)
	movq	-440(%rbp), %rdi
.Ltmp72:
	movl	$.L.str.22, %esi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
.Ltmp73:
	jmp	.LBB6_83
.LBB6_83:
	movq	-440(%rbp), %rsi
.Ltmp74:
	movl	$_ZSt4cout, %edi
	callq	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
.Ltmp75:
	movq	%rax, -912(%rbp)                # 8-byte Spill
	jmp	.LBB6_84
.LBB6_84:
.Ltmp76:
	movq	-912(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp77:
	jmp	.LBB6_85
.LBB6_85:
	leaq	-480(%rbp), %rdi
	movq	%rdi, -920(%rbp)                # 8-byte Spill
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movq	-920(%rbp), %rsi                # 8-byte Reload
.Ltmp78:
	movl	$_ZSt3cin, %edi
	callq	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
.Ltmp79:
	jmp	.LBB6_86
.LBB6_86:
.Ltmp80:
	leaq	-512(%rbp), %rdi
	leaq	-480(%rbp), %rsi
	callq	_Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.Ltmp81:
	jmp	.LBB6_87
.LBB6_87:
	leaq	-480(%rbp), %rdi
	movq	%rdi, -936(%rbp)                # 8-byte Spill
	leaq	-512(%rbp), %rsi
	movq	%rsi, -944(%rbp)                # 8-byte Spill
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
	movq	-944(%rbp), %rdi                # 8-byte Reload
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	-936(%rbp), %rsi                # 8-byte Reload
.Ltmp82:
	movl	$_ZSt4cout, %edi
	callq	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
.Ltmp83:
	movq	%rax, -928(%rbp)                # 8-byte Spill
	jmp	.LBB6_88
.LBB6_88:
.Ltmp84:
	movq	-928(%rbp), %rdi                # 8-byte Reload
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	callq	_ZNSolsEPFRSoS_E
.Ltmp85:
	jmp	.LBB6_89
.LBB6_89:
	leaq	-480(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-184(%rbp), %rdi
	callq	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev
	movl	-4(%rbp), %eax
	addq	$944, %rsp                      # imm = 0x3B0
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB6_90:
	.cfi_def_cfa %rbp, 16
.Ltmp69:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	leaq	-408(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	testb	$1, -409(%rbp)
	jne	.LBB6_91
	jmp	.LBB6_92
.LBB6_91:
	movq	-880(%rbp), %rdi                # 8-byte Reload
	callq	_ZdlPv
.LBB6_92:
	jmp	.LBB6_94
.LBB6_93:
.Ltmp86:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -208(%rbp)
	movl	%eax, -212(%rbp)
	leaq	-480(%rbp), %rdi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB6_94:
	leaq	-184(%rbp), %rdi
	callq	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev
.LBB6_95:
	movq	-208(%rbp), %rdi
	callq	_Unwind_Resume@PLT
.Lfunc_end6:
	.size	main, .Lfunc_end6-main
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2
GCC_except_table6:
.Lexception0:
	.byte	255                             # @LPStart Encoding = omit
	.byte	255                             # @TType Encoding = omit
	.byte	1                               # Call site Encoding = uleb128
	.uleb128 .Lcst_end0-.Lcst_begin0
.Lcst_begin0:
	.uleb128 .Lfunc_begin0-.Lfunc_begin0    # >> Call Site 1 <<
	.uleb128 .Ltmp0-.Lfunc_begin0           #   Call between .Lfunc_begin0 and .Ltmp0
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp0-.Lfunc_begin0           # >> Call Site 2 <<
	.uleb128 .Ltmp1-.Ltmp0                  #   Call between .Ltmp0 and .Ltmp1
	.uleb128 .Ltmp2-.Lfunc_begin0           #     jumps to .Ltmp2
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp3-.Lfunc_begin0           # >> Call Site 3 <<
	.uleb128 .Ltmp4-.Ltmp3                  #   Call between .Ltmp3 and .Ltmp4
	.uleb128 .Ltmp5-.Lfunc_begin0           #     jumps to .Ltmp5
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp6-.Lfunc_begin0           # >> Call Site 4 <<
	.uleb128 .Ltmp7-.Ltmp6                  #   Call between .Ltmp6 and .Ltmp7
	.uleb128 .Ltmp8-.Lfunc_begin0           #     jumps to .Ltmp8
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp9-.Lfunc_begin0           # >> Call Site 5 <<
	.uleb128 .Ltmp10-.Ltmp9                 #   Call between .Ltmp9 and .Ltmp10
	.uleb128 .Ltmp11-.Lfunc_begin0          #     jumps to .Ltmp11
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp12-.Lfunc_begin0          # >> Call Site 6 <<
	.uleb128 .Ltmp13-.Ltmp12                #   Call between .Ltmp12 and .Ltmp13
	.uleb128 .Ltmp14-.Lfunc_begin0          #     jumps to .Ltmp14
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp93-.Lfunc_begin0          # >> Call Site 7 <<
	.uleb128 .Ltmp100-.Ltmp93               #   Call between .Ltmp93 and .Ltmp100
	.uleb128 .Ltmp101-.Lfunc_begin0         #     jumps to .Ltmp101
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp102-.Lfunc_begin0         # >> Call Site 8 <<
	.uleb128 .Ltmp103-.Ltmp102              #   Call between .Ltmp102 and .Ltmp103
	.uleb128 .Ltmp104-.Lfunc_begin0         #     jumps to .Ltmp104
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp105-.Lfunc_begin0         # >> Call Site 9 <<
	.uleb128 .Ltmp112-.Ltmp105              #   Call between .Ltmp105 and .Ltmp112
	.uleb128 .Ltmp113-.Lfunc_begin0         #     jumps to .Ltmp113
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp15-.Lfunc_begin0          # >> Call Site 10 <<
	.uleb128 .Ltmp66-.Ltmp15                #   Call between .Ltmp15 and .Ltmp66
	.uleb128 .Ltmp101-.Lfunc_begin0         #     jumps to .Ltmp101
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp67-.Lfunc_begin0          # >> Call Site 11 <<
	.uleb128 .Ltmp68-.Ltmp67                #   Call between .Ltmp67 and .Ltmp68
	.uleb128 .Ltmp69-.Lfunc_begin0          #     jumps to .Ltmp69
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp70-.Lfunc_begin0          # >> Call Site 12 <<
	.uleb128 .Ltmp77-.Ltmp70                #   Call between .Ltmp70 and .Ltmp77
	.uleb128 .Ltmp101-.Lfunc_begin0         #     jumps to .Ltmp101
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp78-.Lfunc_begin0          # >> Call Site 13 <<
	.uleb128 .Ltmp85-.Ltmp78                #   Call between .Ltmp78 and .Ltmp85
	.uleb128 .Ltmp86-.Lfunc_begin0          #     jumps to .Ltmp86
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp85-.Lfunc_begin0          # >> Call Site 14 <<
	.uleb128 .Lfunc_end6-.Ltmp85            #   Call between .Ltmp85 and .Lfunc_end6
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
.Lcst_end0:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt8ios_base9precisionEl,"axG",@progbits,_ZNSt8ios_base9precisionEl,comdat
	.weak	_ZNSt8ios_base9precisionEl      # -- Begin function _ZNSt8ios_base9precisionEl
	.p2align	4, 0x90
	.type	_ZNSt8ios_base9precisionEl,@function
_ZNSt8ios_base9precisionEl:             # @_ZNSt8ios_base9precisionEl
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rcx
	movq	%rcx, -24(%rbp)
	movq	-16(%rbp), %rcx
	movq	%rcx, 8(%rax)
	movq	-24(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end7:
	.size	_ZNSt8ios_base9precisionEl, .Lfunc_end7-_ZNSt8ios_base9precisionEl
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt3cosf,"axG",@progbits,_ZSt3cosf,comdat
	.weak	_ZSt3cosf                       # -- Begin function _ZSt3cosf
	.p2align	4, 0x90
	.type	_ZSt3cosf,@function
_ZSt3cosf:                              # @_ZSt3cosf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	cosf
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end8:
	.size	_ZSt3cosf, .Lfunc_end8-_ZSt3cosf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4sqrtf,"axG",@progbits,_ZSt4sqrtf,comdat
	.weak	_ZSt4sqrtf                      # -- Begin function _ZSt4sqrtf
	.p2align	4, 0x90
	.type	_ZSt4sqrtf,@function
_ZSt4sqrtf:                             # @_ZSt4sqrtf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	sqrtf
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end9:
	.size	_ZSt4sqrtf, .Lfunc_end9-_ZSt4sqrtf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt3sinf,"axG",@progbits,_ZSt3sinf,comdat
	.weak	_ZSt3sinf                       # -- Begin function _ZSt3sinf
	.p2align	4, 0x90
	.type	_ZSt3sinf,@function
_ZSt3sinf:                              # @_ZSt3sinf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	sinf
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end10:
	.size	_ZSt3sinf, .Lfunc_end10-_ZSt3sinf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt3logf,"axG",@progbits,_ZSt3logf,comdat
	.weak	_ZSt3logf                       # -- Begin function _ZSt3logf
	.p2align	4, 0x90
	.type	_ZSt3logf,@function
_ZSt3logf:                              # @_ZSt3logf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	logf
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end11:
	.size	_ZSt3logf, .Lfunc_end11-_ZSt3logf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_,"axG",@progbits,_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_,comdat
	.weak	_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_ # -- Begin function _ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_
	.p2align	4, 0x90
	.type	_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_,@function
_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_: # @_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cvtsi2sdl	-4(%rbp), %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	callq	pow
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end12:
	.size	_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_, .Lfunc_end12-_ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4ceilf,"axG",@progbits,_ZSt4ceilf,comdat
	.weak	_ZSt4ceilf                      # -- Begin function _ZSt4ceilf
	.p2align	4, 0x90
	.type	_ZSt4ceilf,@function
_ZSt4ceilf:                             # @_ZSt4ceilf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	ceilf@PLT
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end13:
	.size	_ZSt4ceilf, .Lfunc_end13-_ZSt4ceilf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt5floorf,"axG",@progbits,_ZSt5floorf,comdat
	.weak	_ZSt5floorf                     # -- Begin function _ZSt5floorf
	.p2align	4, 0x90
	.type	_ZSt5floorf,@function
_ZSt5floorf:                            # @_ZSt5floorf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	floorf@PLT
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end14:
	.size	_ZSt5floorf, .Lfunc_end14-_ZSt5floorf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt5roundf,"axG",@progbits,_ZSt5roundf,comdat
	.weak	_ZSt5roundf                     # -- Begin function _ZSt5roundf
	.p2align	4, 0x90
	.type	_ZSt5roundf,@function
_ZSt5roundf:                            # @_ZSt5roundf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	callq	roundf@PLT
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end15:
	.size	_ZSt5roundf, .Lfunc_end15-_ZSt5roundf
	.cfi_endproc
                                        # -- End function
	.section	.rodata.cst16,"aM",@progbits,16
	.p2align	4                               # -- Begin function _ZSt3absf
.LCPI16_0:
	.long	0x7fffffff                      # float NaN
	.long	0x7fffffff                      # float NaN
	.long	0x7fffffff                      # float NaN
	.long	0x7fffffff                      # float NaN
	.section	.text._ZSt3absf,"axG",@progbits,_ZSt3absf,comdat
	.weak	_ZSt3absf
	.p2align	4, 0x90
	.type	_ZSt3absf,@function
_ZSt3absf:                              # @_ZSt3absf
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0                 # xmm0 = mem[0],zero,zero,zero
	movaps	.LCPI16_0(%rip), %xmm1          # xmm1 = [NaN,NaN,NaN,NaN]
	pand	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end16:
	.size	_ZSt3absf, .Lfunc_end16-_ZSt3absf
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4leftRSt8ios_base,"axG",@progbits,_ZSt4leftRSt8ios_base,comdat
	.weak	_ZSt4leftRSt8ios_base           # -- Begin function _ZSt4leftRSt8ios_base
	.p2align	4, 0x90
	.type	_ZSt4leftRSt8ios_base,@function
_ZSt4leftRSt8ios_base:                  # @_ZSt4leftRSt8ios_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	$32, %esi
	movl	$176, %edx
	callq	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end17:
	.size	_ZSt4leftRSt8ios_base, .Lfunc_end17-_ZSt4leftRSt8ios_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4setwi,"axG",@progbits,_ZSt4setwi,comdat
	.weak	_ZSt4setwi                      # -- Begin function _ZSt4setwi
	.p2align	4, 0x90
	.type	_ZSt4setwi,@function
_ZSt4setwi:                             # @_ZSt4setwi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end18:
	.size	_ZSt4setwi, .Lfunc_end18-_ZSt4setwi
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_,"axG",@progbits,_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_,comdat
	.weak	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_ # -- Begin function _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.p2align	4, 0x90
	.type	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_,@function
_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_: # @_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)                 # 8-byte Spill
	movq	%rdi, %rax
	movq	%rax, -32(%rbp)                 # 8-byte Spill
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdi
	movq	-24(%rbp), %rsi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
	movq	%rax, %rdi
	callq	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	movq	-40(%rbp), %rdi                 # 8-byte Reload
	movq	%rax, %rsi
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_
	movq	-32(%rbp), %rax                 # 8-byte Reload
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end19:
	.size	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_, .Lfunc_end19-_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt7__cxx119to_stringEi,"axG",@progbits,_ZNSt7__cxx119to_stringEi,comdat
	.weak	_ZNSt7__cxx119to_stringEi       # -- Begin function _ZNSt7__cxx119to_stringEi
	.p2align	4, 0x90
	.type	_ZNSt7__cxx119to_stringEi,@function
_ZNSt7__cxx119to_stringEi:              # @_ZNSt7__cxx119to_stringEi
.Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 3, __gxx_personality_v0
	.cfi_lsda 3, .Lexception1
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movq	%rdi, -64(%rbp)                 # 8-byte Spill
	movq	%rdi, %rax
	movq	%rax, -56(%rbp)                 # 8-byte Spill
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	cmpl	$0, -12(%rbp)
	setl	%al
	andb	$1, %al
	movb	%al, -13(%rbp)
	testb	$1, -13(%rbp)
	je	.LBB20_2
# %bb.1:
	movl	-12(%rbp), %eax
	xorl	$-1, %eax
	addl	$1, %eax
	movl	%eax, -68(%rbp)                 # 4-byte Spill
	jmp	.LBB20_3
.LBB20_2:
	movl	-12(%rbp), %eax
	movl	%eax, -68(%rbp)                 # 4-byte Spill
.LBB20_3:
	movl	-68(%rbp), %eax                 # 4-byte Reload
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %edi
	movl	$10, %esi
	callq	_ZNSt8__detail14__to_chars_lenIjEEjT_i
	movl	%eax, -24(%rbp)
	movb	$0, -25(%rbp)
	movzbl	-13(%rbp), %eax
	andl	$1, %eax
	movl	-24(%rbp), %ecx
	addl	%ecx, %eax
                                        # kill: def $rax killed $eax
	movq	%rax, -88(%rbp)                 # 8-byte Spill
	leaq	-32(%rbp), %rdi
	movq	%rdi, -80(%rbp)                 # 8-byte Spill
	callq	_ZNSaIcEC1Ev
	movq	-64(%rbp), %rdi                 # 8-byte Reload
	movq	-88(%rbp), %rsi                 # 8-byte Reload
	movq	-80(%rbp), %rcx                 # 8-byte Reload
.Ltmp114:
	movl	$45, %edx
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EmcRKS3_
.Ltmp115:
	jmp	.LBB20_4
.LBB20_4:
	leaq	-32(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	movq	-64(%rbp), %rdi                 # 8-byte Reload
	movzbl	-13(%rbp), %eax
                                        # kill: def $rax killed $eax
                                        # kill: def $eax killed $eax killed $rax
	andl	$1, %eax
	movl	%eax, %esi
.Ltmp117:
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
.Ltmp118:
	movq	%rax, -96(%rbp)                 # 8-byte Spill
	jmp	.LBB20_5
.LBB20_5:
	movq	-96(%rbp), %rdi                 # 8-byte Reload
	movl	-24(%rbp), %esi
	movl	-20(%rbp), %edx
	callq	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	movb	$1, -25(%rbp)
	testb	$1, -25(%rbp)
	jne	.LBB20_9
	jmp	.LBB20_8
.LBB20_6:
.Ltmp116:
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -40(%rbp)
	movl	%eax, -44(%rbp)
	leaq	-32(%rbp), %rdi
	callq	_ZNSaIcED1Ev
	jmp	.LBB20_10
.LBB20_7:
.Ltmp119:
	movq	-64(%rbp), %rdi                 # 8-byte Reload
	movq	%rax, %rcx
	movl	%edx, %eax
	movq	%rcx, -40(%rbp)
	movl	%eax, -44(%rbp)
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.LBB20_10
.LBB20_8:
	movq	-64(%rbp), %rdi                 # 8-byte Reload
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LBB20_9:
	movq	-56(%rbp), %rax                 # 8-byte Reload
	addq	$96, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.LBB20_10:
	.cfi_def_cfa %rbp, 16
	movq	-40(%rbp), %rdi
	callq	_Unwind_Resume@PLT
.Lfunc_end20:
	.size	_ZNSt7__cxx119to_stringEi, .Lfunc_end20-_ZNSt7__cxx119to_stringEi
	.cfi_endproc
	.section	.gcc_except_table._ZNSt7__cxx119to_stringEi,"aG",@progbits,_ZNSt7__cxx119to_stringEi,comdat
	.p2align	2
GCC_except_table20:
.Lexception1:
	.byte	255                             # @LPStart Encoding = omit
	.byte	255                             # @TType Encoding = omit
	.byte	1                               # Call site Encoding = uleb128
	.uleb128 .Lcst_end1-.Lcst_begin1
.Lcst_begin1:
	.uleb128 .Ltmp114-.Lfunc_begin1         # >> Call Site 1 <<
	.uleb128 .Ltmp115-.Ltmp114              #   Call between .Ltmp114 and .Ltmp115
	.uleb128 .Ltmp116-.Lfunc_begin1         #     jumps to .Ltmp116
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp117-.Lfunc_begin1         # >> Call Site 2 <<
	.uleb128 .Ltmp118-.Ltmp117              #   Call between .Ltmp117 and .Ltmp118
	.uleb128 .Ltmp119-.Lfunc_begin1         #     jumps to .Ltmp119
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp118-.Lfunc_begin1         # >> Call Site 3 <<
	.uleb128 .Lfunc_end20-.Ltmp118          #   Call between .Ltmp118 and .Lfunc_end20
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
.Lcst_end1:
	.p2align	2
                                        # -- End function
	.section	.text._ZNSt5arrayIiLm5EEixEm,"axG",@progbits,_ZNSt5arrayIiLm5EEixEm,comdat
	.weak	_ZNSt5arrayIiLm5EEixEm          # -- Begin function _ZNSt5arrayIiLm5EEixEm
	.p2align	4, 0x90
	.type	_ZNSt5arrayIiLm5EEixEm,@function
_ZNSt5arrayIiLm5EEixEm:                 # @_ZNSt5arrayIiLm5EEixEm
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end21:
	.size	_ZNSt5arrayIiLm5EEixEm, .Lfunc_end21-_ZNSt5arrayIiLm5EEixEm
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt5rightRSt8ios_base,"axG",@progbits,_ZSt5rightRSt8ios_base,comdat
	.weak	_ZSt5rightRSt8ios_base          # -- Begin function _ZSt5rightRSt8ios_base
	.p2align	4, 0x90
	.type	_ZSt5rightRSt8ios_base,@function
_ZSt5rightRSt8ios_base:                 # @_ZSt5rightRSt8ios_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	$128, %esi
	movl	$176, %edx
	callq	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end22:
	.size	_ZSt5rightRSt8ios_base, .Lfunc_end22-_ZSt5rightRSt8ios_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm,"axG",@progbits,_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm,comdat
	.weak	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm # -- Begin function _ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm
	.p2align	4, 0x90
	.type	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm,@function
_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm: # @_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	callq	_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end23:
	.size	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm, .Lfunc_end23-_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt12setprecisioni,"axG",@progbits,_ZSt12setprecisioni,comdat
	.weak	_ZSt12setprecisioni             # -- Begin function _ZSt12setprecisioni
	.p2align	4, 0x90
	.type	_ZSt12setprecisioni,@function
_ZSt12setprecisioni:                    # @_ZSt12setprecisioni
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end24:
	.size	_ZSt12setprecisioni, .Lfunc_end24-_ZSt12setprecisioni
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt7showposRSt8ios_base,"axG",@progbits,_ZSt7showposRSt8ios_base,comdat
	.weak	_ZSt7showposRSt8ios_base        # -- Begin function _ZSt7showposRSt8ios_base
	.p2align	4, 0x90
	.type	_ZSt7showposRSt8ios_base,@function
_ZSt7showposRSt8ios_base:               # @_ZSt7showposRSt8ios_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	$2048, %esi                     # imm = 0x800
	callq	_ZNSt8ios_base4setfESt13_Ios_Fmtflags
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end25:
	.size	_ZSt7showposRSt8ios_base, .Lfunc_end25-_ZSt7showposRSt8ios_base
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt9showpointRSt8ios_base,"axG",@progbits,_ZSt9showpointRSt8ios_base,comdat
	.weak	_ZSt9showpointRSt8ios_base      # -- Begin function _ZSt9showpointRSt8ios_base
	.p2align	4, 0x90
	.type	_ZSt9showpointRSt8ios_base,@function
_ZSt9showpointRSt8ios_base:             # @_ZSt9showpointRSt8ios_base
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	$1024, %esi                     # imm = 0x400
	callq	_ZNSt8ios_base4setfESt13_Ios_Fmtflags
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end26:
	.size	_ZSt9showpointRSt8ios_base, .Lfunc_end26-_ZSt9showpointRSt8ios_base
	.cfi_endproc
                                        # -- End function
	.text
	.globl	_Z14allocateStringB5cxx11v      # -- Begin function _Z14allocateStringB5cxx11v
	.p2align	4, 0x90
	.type	_Z14allocateStringB5cxx11v,@function
_Z14allocateStringB5cxx11v:             # @_Z14allocateStringB5cxx11v
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$32, %edi
	callq	_Znwm
	movq	%rax, %rdi
	movq	%rdi, -8(%rbp)                  # 8-byte Spill
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movq	-8(%rbp), %rax                  # 8-byte Reload
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end27:
	.size	_Z14allocateStringB5cxx11v, .Lfunc_end27-_Z14allocateStringB5cxx11v
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev,"axG",@progbits,_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev,comdat
	.weak	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev # -- Begin function _ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev
	.p2align	4, 0x90
	.type	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev,@function
_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev: # @_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)                 # 8-byte Spill
	addq	$160, %rax
	movq	%rax, -16(%rbp)                 # 8-byte Spill
.LBB28_1:                               # =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rdi                 # 8-byte Reload
	addq	$-32, %rdi
	movq	%rdi, -32(%rbp)                 # 8-byte Spill
	callq	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	-24(%rbp), %rcx                 # 8-byte Reload
	movq	-32(%rbp), %rax                 # 8-byte Reload
	cmpq	%rcx, %rax
	movq	%rax, -16(%rbp)                 # 8-byte Spill
	jne	.LBB28_1
# %bb.2:
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end28:
	.size	_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev, .Lfunc_end28-_ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EED2Ev
	.cfi_endproc
                                        # -- End function
	.text
	.globl	_Z7getCharv                     # -- Begin function _Z7getCharv
	.p2align	4, 0x90
	.type	_Z7getCharv,@function
_Z7getCharv:                            # @_Z7getCharv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movabsq	$_ZSt3cin, %rdi
	leaq	-1(%rbp), %rsi
	callq	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movsbl	-1(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end29:
	.size	_Z7getCharv, .Lfunc_end29-_Z7getCharv
	.cfi_endproc
                                        # -- End function
	.globl	_Z9printMenuv                   # -- Begin function _Z9printMenuv
	.p2align	4, 0x90
	.type	_Z9printMenuv,@function
_Z9printMenuv:                          # @_Z9printMenuv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movabsq	$_ZSt4cout, %rdi
	movabsq	$.L.str.23, %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	movabsq	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %rsi
	callq	_ZNSolsEPFRSoS_E
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end30:
	.size	_Z9printMenuv, .Lfunc_end30-_Z9printMenuv
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,"axG",@progbits,_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,comdat
	.weak	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_ # -- Begin function _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.p2align	4, 0x90
	.type	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,@function
_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_: # @_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -32(%rbp)                 # 8-byte Spill
	movl	24(%rax), %eax
	movl	%eax, -20(%rbp)
	movl	-16(%rbp), %edi
	callq	_ZStcoSt13_Ios_Fmtflags
	movq	-32(%rbp), %rdi                 # 8-byte Reload
	movl	%eax, %esi
	addq	$24, %rdi
	callq	_ZStaNRSt13_Ios_FmtflagsS_
	movl	-12(%rbp), %edi
	movl	-16(%rbp), %esi
	callq	_ZStanSt13_Ios_FmtflagsS_
	movq	-32(%rbp), %rdi                 # 8-byte Reload
	movl	%eax, %esi
	addq	$24, %rdi
	callq	_ZStoRRSt13_Ios_FmtflagsS_
	movl	-20(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end31:
	.size	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_, .Lfunc_end31-_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStaNRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStaNRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStaNRSt13_Ios_FmtflagsS_      # -- Begin function _ZStaNRSt13_Ios_FmtflagsS_
	.p2align	4, 0x90
	.type	_ZStaNRSt13_Ios_FmtflagsS_,@function
_ZStaNRSt13_Ios_FmtflagsS_:             # @_ZStaNRSt13_Ios_FmtflagsS_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %edi
	movl	-12(%rbp), %esi
	callq	_ZStanSt13_Ios_FmtflagsS_
	movl	%eax, %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, (%rax)
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end32:
	.size	_ZStaNRSt13_Ios_FmtflagsS_, .Lfunc_end32-_ZStaNRSt13_Ios_FmtflagsS_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStcoSt13_Ios_Fmtflags,"axG",@progbits,_ZStcoSt13_Ios_Fmtflags,comdat
	.weak	_ZStcoSt13_Ios_Fmtflags         # -- Begin function _ZStcoSt13_Ios_Fmtflags
	.p2align	4, 0x90
	.type	_ZStcoSt13_Ios_Fmtflags,@function
_ZStcoSt13_Ios_Fmtflags:                # @_ZStcoSt13_Ios_Fmtflags
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	xorl	$-1, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end33:
	.size	_ZStcoSt13_Ios_Fmtflags, .Lfunc_end33-_ZStcoSt13_Ios_Fmtflags
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStoRRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStoRRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStoRRSt13_Ios_FmtflagsS_      # -- Begin function _ZStoRRSt13_Ios_FmtflagsS_
	.p2align	4, 0x90
	.type	_ZStoRRSt13_Ios_FmtflagsS_,@function
_ZStoRRSt13_Ios_FmtflagsS_:             # @_ZStoRRSt13_Ios_FmtflagsS_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %edi
	movl	-12(%rbp), %esi
	callq	_ZStorSt13_Ios_FmtflagsS_
	movl	%eax, %ecx
	movq	-8(%rbp), %rax
	movl	%ecx, (%rax)
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end34:
	.size	_ZStoRRSt13_Ios_FmtflagsS_, .Lfunc_end34-_ZStoRRSt13_Ios_FmtflagsS_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStanSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStanSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStanSt13_Ios_FmtflagsS_       # -- Begin function _ZStanSt13_Ios_FmtflagsS_
	.p2align	4, 0x90
	.type	_ZStanSt13_Ios_FmtflagsS_,@function
_ZStanSt13_Ios_FmtflagsS_:              # @_ZStanSt13_Ios_FmtflagsS_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	andl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end35:
	.size	_ZStanSt13_Ios_FmtflagsS_, .Lfunc_end35-_ZStanSt13_Ios_FmtflagsS_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZStorSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStorSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStorSt13_Ios_FmtflagsS_       # -- Begin function _ZStorSt13_Ios_FmtflagsS_
	.p2align	4, 0x90
	.type	_ZStorSt13_Ios_FmtflagsS_,@function
_ZStorSt13_Ios_FmtflagsS_:              # @_ZStorSt13_Ios_FmtflagsS_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	orl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end36:
	.size	_ZStorSt13_Ios_FmtflagsS_, .Lfunc_end36-_ZStorSt13_Ios_FmtflagsS_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8__detail14__to_chars_lenIjEEjT_i,"axG",@progbits,_ZNSt8__detail14__to_chars_lenIjEEjT_i,comdat
	.weak	_ZNSt8__detail14__to_chars_lenIjEEjT_i # -- Begin function _ZNSt8__detail14__to_chars_lenIjEEjT_i
	.p2align	4, 0x90
	.type	_ZNSt8__detail14__to_chars_lenIjEEjT_i,@function
_ZNSt8__detail14__to_chars_lenIjEEjT_i: # @_ZNSt8__detail14__to_chars_lenIjEEjT_i
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	$1, -16(%rbp)
	movl	-12(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, %eax
                                        # kill: def $rax killed $eax
	movq	%rax, -32(%rbp)
.LBB37_1:                               # =>This Inner Loop Header: Depth=1
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jae	.LBB37_3
# %bb.2:
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB37_10
.LBB37_3:                               #   in Loop: Header=BB37_1 Depth=1
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jae	.LBB37_5
# %bb.4:
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB37_10
.LBB37_5:                               #   in Loop: Header=BB37_1 Depth=1
	movl	-8(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jae	.LBB37_7
# %bb.6:
	movl	-16(%rbp), %eax
	addl	$2, %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB37_10
.LBB37_7:                               #   in Loop: Header=BB37_1 Depth=1
	movl	-8(%rbp), %eax
                                        # kill: def $rax killed $eax
	cmpq	-32(%rbp), %rax
	jae	.LBB37_9
# %bb.8:
	movl	-16(%rbp), %eax
	addl	$3, %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB37_10
.LBB37_9:                               #   in Loop: Header=BB37_1 Depth=1
	movq	-32(%rbp), %rcx
	movl	-8(%rbp), %eax
                                        # kill: def $rax killed $eax
	xorl	%edx, %edx
                                        # kill: def $rdx killed $edx
	divq	%rcx
                                        # kill: def $eax killed $eax killed $rax
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	addl	$4, %eax
	movl	%eax, -16(%rbp)
	jmp	.LBB37_1
.LBB37_10:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end37:
	.size	_ZNSt8__detail14__to_chars_lenIjEEjT_i, .Lfunc_end37-_ZNSt8__detail14__to_chars_lenIjEEjT_i
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8__detail18__to_chars_10_implIjEEvPcjT_,"axG",@progbits,_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_,comdat
	.weak	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_ # -- Begin function _ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.p2align	4, 0x90
	.type	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_,@function
_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_: # @_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -20(%rbp)
.LBB38_1:                               # =>This Inner Loop Header: Depth=1
	cmpl	$100, -16(%rbp)
	jb	.LBB38_3
# %bb.2:                                #   in Loop: Header=BB38_1 Depth=1
	movl	-16(%rbp), %eax
	movl	$100, %ecx
	xorl	%edx, %edx
	divl	%ecx
	shll	$1, %edx
	movl	%edx, -24(%rbp)
	movl	-16(%rbp), %eax
	movl	$100, %ecx
	xorl	%edx, %edx
	divl	%ecx
	movl	%eax, -16(%rbp)
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %eax
                                        # kill: def $rax killed $eax
	movb	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(,%rax), %dl
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %ecx
                                        # kill: def $rcx killed $ecx
	movb	%dl, (%rax,%rcx)
	movl	-24(%rbp), %eax
                                        # kill: def $rax killed $eax
	movb	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(,%rax), %dl
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %ecx
	subl	$1, %ecx
	movl	%ecx, %ecx
                                        # kill: def $rcx killed $ecx
	movb	%dl, (%rax,%rcx)
	movl	-20(%rbp), %eax
	subl	$2, %eax
	movl	%eax, -20(%rbp)
	jmp	.LBB38_1
.LBB38_3:
	cmpl	$10, -16(%rbp)
	jb	.LBB38_5
# %bb.4:
	movl	-16(%rbp), %eax
	shll	$1, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %eax
                                        # kill: def $rax killed $eax
	movb	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(,%rax), %cl
	movq	-8(%rbp), %rax
	movb	%cl, 1(%rax)
	movl	-28(%rbp), %eax
                                        # kill: def $rax killed $eax
	movb	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(,%rax), %cl
	movq	-8(%rbp), %rax
	movb	%cl, (%rax)
	jmp	.LBB38_6
.LBB38_5:
	movl	-16(%rbp), %eax
	addl	$48, %eax
	movb	%al, %cl
	movq	-8(%rbp), %rax
	movb	%cl, (%rax)
.LBB38_6:
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end38:
	.size	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_, .Lfunc_end38-_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt8ios_base4setfESt13_Ios_Fmtflags,"axG",@progbits,_ZNSt8ios_base4setfESt13_Ios_Fmtflags,comdat
	.weak	_ZNSt8ios_base4setfESt13_Ios_Fmtflags # -- Begin function _ZNSt8ios_base4setfESt13_Ios_Fmtflags
	.p2align	4, 0x90
	.type	_ZNSt8ios_base4setfESt13_Ios_Fmtflags,@function
_ZNSt8ios_base4setfESt13_Ios_Fmtflags:  # @_ZNSt8ios_base4setfESt13_Ios_Fmtflags
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rdi
	movl	24(%rdi), %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %esi
	addq	$24, %rdi
	callq	_ZStoRRSt13_Ios_FmtflagsS_
	movl	-16(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end39:
	.size	_ZNSt8ios_base4setfESt13_Ios_Fmtflags, .Lfunc_end39-_ZNSt8ios_base4setfESt13_Ios_Fmtflags
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim,"axG",@progbits,_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim,comdat
	.weak	_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim # -- Begin function _ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim
	.p2align	4, 0x90
	.type	_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim,@function
_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim: # @_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	shlq	$2, %rcx
	addq	%rcx, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end40:
	.size	_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim, .Lfunc_end40-_ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim
	.cfi_endproc
                                        # -- End function
	.section	.text._ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_,"axG",@progbits,_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_,comdat
	.weak	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_ # -- Begin function _ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.p2align	4, 0x90
	.type	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_,@function
_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_: # @_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end41:
	.size	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_, .Lfunc_end41-_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.cfi_endproc
                                        # -- End function
	.section	.text._ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m,"axG",@progbits,_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m,comdat
	.weak	_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m # -- Begin function _ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m
	.p2align	4, 0x90
	.type	_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m,@function
_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m: # @_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rcx
	shlq	$5, %rcx
	addq	%rcx, %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end42:
	.size	_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m, .Lfunc_end42-_ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m
	.cfi_endproc
                                        # -- End function
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90                         # -- Begin function _GLOBAL__sub_I_hello.cpp
	.type	_GLOBAL__sub_I_hello.cpp,@function
_GLOBAL__sub_I_hello.cpp:               # @_GLOBAL__sub_I_hello.cpp
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	callq	__cxx_global_var_init
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end43:
	.size	_GLOBAL__sub_I_hello.cpp, .Lfunc_end43-_GLOBAL__sub_I_hello.cpp
	.cfi_endproc
                                        # -- End function
	.type	_ZStL8__ioinit,@object          # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"beggin====="
	.size	.L.str, 12

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"\226"
	.size	.L.str.1, 2

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"\0177"
	.size	.L.str.2, 3

	.type	.L.str.3,@object                # @.str.3
	.section	.rodata,"a",@progbits
.L.str.3:
	.zero	2
	.size	.L.str.3, 2

	.type	.L.str.4,@object                # @.str.4
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str.4:
	.asciz	"\\"
	.size	.L.str.4, 2

	.type	.L.str.5,@object                # @.str.5
.L.str.5:
	.asciz	"\t"
	.size	.L.str.5, 2

	.type	.L.str.6,@object                # @.str.6
.L.str.6:
	.asciz	"\""
	.size	.L.str.6, 2

	.type	.L.str.7,@object                # @.str.7
.L.str.7:
	.asciz	"printing character in base 10: "
	.size	.L.str.7, 32

	.type	.L.str.8,@object                # @.str.8
.L.str.8:
	.asciz	"\nPrinting in Base 16: D\n"
	.size	.L.str.8, 25

	.type	.L.str.9,@object                # @.str.9
.L.str.9:
	.asciz	"Printing Character in base 8 :  D\n\n"
	.size	.L.str.9, 36

	.type	.L.str.10,@object               # @.str.10
.L.str.10:
	.asciz	"aaa"
	.size	.L.str.10, 4

	.type	.L.str.11,@object               # @.str.11
.L.str.11:
	.asciz	"bbb"
	.size	.L.str.11, 4

	.type	.L.str.12,@object               # @.str.12
.L.str.12:
	.asciz	"Dina"
	.size	.L.str.12, 5

	.type	.L.str.13,@object               # @.str.13
.L.str.13:
	.asciz	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	.size	.L.str.13, 27

	.type	.L.str.14,@object               # @.str.14
.L.str.14:
	.asciz	"abcdefghijklmnopqrstuvwxyz"
	.size	.L.str.14, 27

	.type	.L__const.main.ID,@object       # @__const.main.ID
	.section	.rodata,"a",@progbits
	.p2align	2
.L__const.main.ID:
	.long	983333                          # 0xf0125
	.long	34234                           # 0x85ba
	.long	123123                          # 0x1e0f3
	.long	324234                          # 0x4f28a
	.long	654454352                       # 0x27022e50
	.size	.L__const.main.ID, 20

	.type	.L.str.15,@object               # @.str.15
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str.15:
	.asciz	":  "
	.size	.L.str.15, 4

	.type	.L.str.16,@object               # @.str.16
.L.str.16:
	.asciz	"\n"
	.size	.L.str.16, 2

	.type	.L.str.17,@object               # @.str.17
.L.str.17:
	.asciz	"Creating"
	.size	.L.str.17, 9

	.type	.L.str.18,@object               # @.str.18
.L.str.18:
	.asciz	"out of room"
	.size	.L.str.18, 12

	.type	.L.str.19,@object               # @.str.19
.L.str.19:
	.asciz	"Deleting"
	.size	.L.str.19, 9

	.type	.L.str.20,@object               # @.str.20
.L.str.20:
	.asciz	"five plus five is "
	.size	.L.str.20, 19

	.type	.L.str.21,@object               # @.str.21
.L.str.21:
	.asciz	"Simon Lewis"
	.size	.L.str.21, 12

	.type	.L.str.22,@object               # @.str.22
.L.str.22:
	.asciz	"harry Potter"
	.size	.L.str.22, 13

	.type	.L.str.23,@object               # @.str.23
.L.str.23:
	.asciz	"1. deposit\n2.Withdown\n3.Chack Balance\n"
	.size	.L.str.23, 39

	.type	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits,@object # @_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits
	.section	.rodata._ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits,"aG",@progbits,_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits,comdat
	.weak	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits
	.p2align	4
_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits:
	.asciz	"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
	.size	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits, 201

	.section	.init_array,"aw",@init_array
	.p2align	3
	.quad	_GLOBAL__sub_I_hello.cpp
	.ident	"Ubuntu clang version 13.0.0-2"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym __cxx_global_var_init
	.addrsig_sym __cxa_atexit
	.addrsig_sym _Z10capatalizeRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.addrsig_sym _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
	.addrsig_sym toupper
	.addrsig_sym _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
	.addrsig_sym _Z12fivePlusfivev
	.addrsig_sym _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	.addrsig_sym _ZNSolsEPFRSoS_E
	.addrsig_sym _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.addrsig_sym _ZNSt8ios_base9precisionEl
	.addrsig_sym _ZNSolsEi
	.addrsig_sym _ZNSolsEf
	.addrsig_sym _ZSt3cosf
	.addrsig_sym _ZSt4sqrtf
	.addrsig_sym _ZSt3sinf
	.addrsig_sym _ZSt3logf
	.addrsig_sym _ZNSolsEd
	.addrsig_sym _ZSt3powIiiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_Xsr3std12__is_integerIS2_EE7__valueEE6__typeENS4_IS3_Xsr3std12__is_integerIS3_EE7__valueEE6__typeEE6__typeES2_S3_
	.addrsig_sym _ZSt4ceilf
	.addrsig_sym _ZSt5floorf
	.addrsig_sym _ZSt5roundf
	.addrsig_sym _ZSt3absf
	.addrsig_sym _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	.addrsig_sym srand
	.addrsig_sym time
	.addrsig_sym rand
	.addrsig_sym __gxx_personality_v0
	.addrsig_sym _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	.addrsig_sym _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
	.addrsig_sym _ZNSolsEPFRSt8ios_baseS0_E
	.addrsig_sym _ZSt4leftRSt8ios_base
	.addrsig_sym _ZSt4setwi
	.addrsig_sym _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.addrsig_sym _ZNSt7__cxx119to_stringEi
	.addrsig_sym _ZNSt5arrayIiLm5EEixEm
	.addrsig_sym _ZSt5rightRSt8ios_base
	.addrsig_sym _ZNSt5arrayINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EEixEm
	.addrsig_sym _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
	.addrsig_sym _ZSt12setprecisioni
	.addrsig_sym _ZSt7showposRSt8ios_base
	.addrsig_sym _ZSt9showpointRSt8ios_base
	.addrsig_sym _Znwm
	.addrsig_sym _ZNSolsEPKv
	.addrsig_sym _ZdlPv
	.addrsig_sym _Znam
	.addrsig_sym _ZdaPv
	.addrsig_sym _Z14allocateStringB5cxx11v
	.addrsig_sym _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
	.addrsig_sym _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	.addrsig_sym _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
	.addrsig_sym _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	.addrsig_sym cosf
	.addrsig_sym sqrtf
	.addrsig_sym sinf
	.addrsig_sym logf
	.addrsig_sym pow
	.addrsig_sym _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.addrsig_sym _ZStaNRSt13_Ios_FmtflagsS_
	.addrsig_sym _ZStcoSt13_Ios_Fmtflags
	.addrsig_sym _ZStoRRSt13_Ios_FmtflagsS_
	.addrsig_sym _ZStanSt13_Ios_FmtflagsS_
	.addrsig_sym _ZStorSt13_Ios_FmtflagsS_
	.addrsig_sym _ZNSt8__detail14__to_chars_lenIjEEjT_i
	.addrsig_sym _ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.addrsig_sym _ZNSt8ios_base4setfESt13_Ios_Fmtflags
	.addrsig_sym _ZNSt14__array_traitsIiLm5EE6_S_refERA5_Kim
	.addrsig_sym _ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.addrsig_sym _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
	.addrsig_sym _ZNSt14__array_traitsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEELm5EE6_S_refERA5_KS5_m
	.addrsig_sym _GLOBAL__sub_I_hello.cpp
	.addrsig_sym _Unwind_Resume
	.addrsig_sym _ZStL8__ioinit
	.addrsig_sym __dso_handle
	.addrsig_sym _ZSt4cout
	.addrsig_sym _ZSt3cin
	.addrsig_sym _ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits
