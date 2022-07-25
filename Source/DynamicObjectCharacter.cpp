No any error strings related to the file

Probably related to the file:

Default
DYNAMICOBJECTCHARACTERMODE_WALKRUNJUMP_ANIMATIONDRIVEN
DYNAMICOBJECTCHARACTERMODE_WALKRUNJUMP_PHYSICSDRIVEN
DYNAMICOBJECTCHARACTERMODE_FULLYTOTALLY_ANIMATIONDRIVEN
DYNAMICOBJECTCHARACTERMODE_JUMPFLOAT
DYNAMICOBJECTCHARACTERMODE_JUMPFLY
DYNAMICOBJECTCHARACTERMODE_SLIP
DYNAMICOBJECTCHARACTERMODE_CLIMB
DYNAMICOBJECTCHARACTERMODE_TUMBLE
DYNAMICOBJECTCHARACTERMODE_SLAM
DYNAMICOBJECTCHARACTERMODE_ATTACHINGTOMATRIX
DYNAMICOBJECTCHARACTERMODE_REMOVEDFROMWORLD
DYNAMICOBJECTCHARACTERMODE_ATTACHEDTOMATRIX_WITHCOLLISION
DYNAMICOBJECTCHARACTERMODE_ATTACHEDTOPUSHABLEPULLABLE
DYNAMICOBJECTCHARACTERMODE_AIRSTREAM
DYNAMICOBJECTCHARACTERMODE_TRAMPOLINE
DYNAMICOBJECTCHARACTERMODE_GRAPPLESWING
DYNAMICOBJECTCHARACTERMODE_GRAPPLETARGET
DYNAMICOBJECTCHARACTERMODE_IMMOVABLESPAWNER
DYNAMICOBJECTCHARACTERMODE_FACETARGET
DYNAMICOBJECTCHARACTERMODE_FLYLAND
DYNAMICOBJECTCHARACTERMODE_RUSHATTACK
DYNAMICOBJECTCHARACTERMODE_ZEROANIMLENGHTNOMOVEMENT

========================

Snowman decompiler:

void** fun_4f1cee(void** a1)
{
    void** ecx2;
    void** esi3;
    void** edi4;
    void** esi5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void* esp11;
    void** v12;
    void** v13;
    void* esp14;
    void*** esp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;

    ecx2 = *reinterpret_cast<void***>(a1 + 0x1a4);
    esi3 = *reinterpret_cast<void***>(ecx2 + 0x1f4);
    eax10 = fun_408324(ecx2, a1, edi4, esi5, v6, v7, v8, v9);
    esp11 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 72 - 4 - 4 - 4 - 4 + 4);
    fun_45c060(ecx2, reinterpret_cast<uint32_t>(esp11) + 20, eax10, a1, edi4, esi5, v12, v13);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp11) - 4 - 4 - 4 + 4 + 12);
    switch (esi3) {
    default:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("Default");
        break;
    case 0:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_WALKRUNJUMP_ANIMATIONDRIVEN");
        break;
    case 1:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_WALKRUNJUMP_PHYSICSDRIVEN");
        break;
    case 2:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_FULLYTOTALLY_ANIMATIONDRIVEN");
        break;
    case 3:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_JUMPFLOAT");
        break;
    case 4:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_JUMPFLY");
        break;
    case 5:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_SLIP");
        break;
    case 6:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_CLIMB");
        break;
    case 7:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_TUMBLE");
        break;
    case 8:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_SLAM");
        break;
    case 9:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_ATTACHINGTOMATRIX");
        break;
    case 10:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_REMOVEDFROMWORLD");
        break;
    case 11:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_ATTACHEDTOMATRIX_WITHCOLLISION");
        break;
    case 12:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_ATTACHEDTOPUSHABLEPULLABLE");
        break;
    case 13:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_AIRSTREAM");
        break;
    case 14:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_TRAMPOLINE");
        break;
    case 15:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_GRAPPLESWING");
        break;
    case 16:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_GRAPPLETARGET");
        break;
    case 17:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_IMMOVABLESPAWNER");
        break;
    case 18:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_FACETARGET");
        break;
    case 19:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_FLYLAND");
        break;
    case 20:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_RUSHATTACK");
        break;
    case 21:
        esp15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4);
        v16 = reinterpret_cast<void**>("DYNAMICOBJECTCHARACTERMODE_ZEROANIMLENGHTNOMOVEMENT");
    }
    fun_45bb60(ecx2, "%s", v16, edi4, esi5, v17, v18, v19, v20);
    eax24 = fun_45c060(v16, esp15 - 4 - 4 + 4 + 4 + 4 + 16, eax10, edi4, esi5, v21, v22, v23);
    return eax24;
}



Functions called by fun_4f1cee:

void** fun_408324(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    return a2 + 0xd0;
}

void** fun_45c060(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, ...) {
    void** eax9;

    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a3);
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a3 + 4);
    *reinterpret_cast<void***>(a2 + 8) = *reinterpret_cast<void***>(a3 + 8);
    *reinterpret_cast<void***>(a2 + 12) = *reinterpret_cast<void***>(a3 + 12);
    *reinterpret_cast<void***>(a2 + 16) = *reinterpret_cast<void***>(a3 + 16);
    *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(a3 + 20);
    *reinterpret_cast<void***>(a2 + 24) = *reinterpret_cast<void***>(a3 + 24);
    *reinterpret_cast<void***>(a2 + 28) = *reinterpret_cast<void***>(a3 + 28);
    *reinterpret_cast<void***>(a2 + 32) = *reinterpret_cast<void***>(a3 + 32);
    *reinterpret_cast<void***>(a2 + 36) = *reinterpret_cast<void***>(a3 + 36);
    *reinterpret_cast<void***>(a2 + 40) = *reinterpret_cast<void***>(a3 + 40);
    *reinterpret_cast<void***>(a2 + 44) = *reinterpret_cast<void***>(a3 + 44);
    *reinterpret_cast<void***>(a2 + 48) = *reinterpret_cast<void***>(a3 + 48);
    *reinterpret_cast<void***>(a2 + 52) = *reinterpret_cast<void***>(a3 + 52);
    *reinterpret_cast<void***>(a2 + 56) = *reinterpret_cast<void***>(a3 + 56);
    eax9 = *reinterpret_cast<void***>(a3 + 60);
    *reinterpret_cast<void***>(a2 + 60) = eax9;
    return eax9;
}

void** fun_45bb60(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    void* esp10;
    void** v11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** ecx22;

    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4);
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10) + 8);
    eax21 = fun_460f30(ecx, v11, 0x6b8e70, 0x400, esi12, v13, v14, v15, v16, v17, v18, v19, v20, __return_address(), a2, a3, a4);
    ecx22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 + 4 + 56);
    fun_45b680(eax21, a2, ecx22, v11, 0x6b8e70, 0x400);
    fun_461030(ecx22, eax21, ecx22, eax21);
    return 0x6b8e70;
}

void** fun_45c060(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, ...) {
    void** eax9;

    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a3);
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a3 + 4);
    *reinterpret_cast<void***>(a2 + 8) = *reinterpret_cast<void***>(a3 + 8);
    *reinterpret_cast<void***>(a2 + 12) = *reinterpret_cast<void***>(a3 + 12);
    *reinterpret_cast<void***>(a2 + 16) = *reinterpret_cast<void***>(a3 + 16);
    *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(a3 + 20);
    *reinterpret_cast<void***>(a2 + 24) = *reinterpret_cast<void***>(a3 + 24);
    *reinterpret_cast<void***>(a2 + 28) = *reinterpret_cast<void***>(a3 + 28);
    *reinterpret_cast<void***>(a2 + 32) = *reinterpret_cast<void***>(a3 + 32);
    *reinterpret_cast<void***>(a2 + 36) = *reinterpret_cast<void***>(a3 + 36);
    *reinterpret_cast<void***>(a2 + 40) = *reinterpret_cast<void***>(a3 + 40);
    *reinterpret_cast<void***>(a2 + 44) = *reinterpret_cast<void***>(a3 + 44);
    *reinterpret_cast<void***>(a2 + 48) = *reinterpret_cast<void***>(a3 + 48);
    *reinterpret_cast<void***>(a2 + 52) = *reinterpret_cast<void***>(a3 + 52);
    *reinterpret_cast<void***>(a2 + 56) = *reinterpret_cast<void***>(a3 + 56);
    eax9 = *reinterpret_cast<void***>(a3 + 60);
    *reinterpret_cast<void***>(a2 + 60) = eax9;
    return eax9;
}

functions called by fun_45bb60:

uint32_t fun_45b680(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** esi8;
    uint32_t esi9;
    int1_t zf10;
    void** v11;
    void** edi12;
    void** edi13;
    void** v14;
    void** ebx15;
    void** ebx16;
    void*** esp17;
    void** v18;
    void** ebp19;
    void** ebp20;
    void** ecx21;
    void** eax22;
    void** v23;
    int32_t v24;
    void** v25;
    void** eax26;
    void* esp27;
    void* eax28;
    void* esp29;
    void* eax30;
    void* eax31;
    void* eax32;
    void* eax33;
    void** eax34;
    void** v35;
    void** v36;
    void* eax37;
    void** v38;
    void** v39;
    void** v40;
    void* eax41;
    void** eax42;
    void* esp43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void* eax48;
    void* eax49;
    void** eax50;
    void* esp51;
    void* eax52;
    void** eax53;
    void* esp54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void* eax59;
    void* eax60;
    void** eax61;
    void* esp62;
    void** v63;
    void* eax64;
    void* eax65;
    void** eax66;
    void* esp67;
    void* eax68;
    void** v69;
    void* eax70;
    void** v71;
    void** v72;
    void* eax73;
    void* esp74;
    void** v75;
    void* eax76;
    void* eax77;
    void* esp78;
    void* eax79;
    void* eax80;
    void* esp81;
    void** v82;
    void* eax83;
    void* eax84;
    void* esp85;
    void** v86;
    void* eax87;
    void* eax88;

    v7 = esi8;
    esi9 = 0;
    zf10 = *reinterpret_cast<void***>(a2) == 0;
    v11 = edi12;
    edi13 = a2;
    if (!zf10) {
        v14 = ebx15;
        ebx16 = a1;
        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 4 - 4 - 4 - 4);
        v18 = ebp19;
        ebp20 = a3 + 0xfffffffc;
        do {
            __asm__("fld dword [0x5b2e3c]");
            if (*reinterpret_cast<void***>(edi13) == 37) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi13 + 1) == 37)) {
                    ecx21 = reinterpret_cast<void**>(esp17 + 24);
                    eax22 = fun_45b0f0(ecx21);
                    esp17 = esp17 - 4 + 4;
                    v23 = eax22;
                    switch (v24) {
                    default:
                        __asm__("fstp st0");
                        break;
                    case 0:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        v25 = *reinterpret_cast<void***>(ebp20 + 4);
                        ecx21 = v25;
                        eax26 = fun_45abe0(ecx21, ebx16, ecx21);
                        esp17 = esp17 - 4 - 4 - 4 + 4 + 8;
                        esi9 = esi9 + reinterpret_cast<unsigned char>(eax26);
                        break;
                    case 1:
                        __asm__("fstp st0");
                        esp27 = reinterpret_cast<void*>(esp17 - 4);
                        ebp20 = ebp20 + 4;
                        eax28 = fun_45ad40(ecx21, ebx16, reinterpret_cast<int32_t>(esp27) + 28, 1);
                        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 + 4 + 12);
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax28);
                        break;
                    case 2:
                        __asm__("fstp st0");
                        esp29 = reinterpret_cast<void*>(esp17 - 4);
                        ecx21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp29) + 28);
                        ebp20 = ebp20 + 4;
                        eax30 = fun_45ad40(ecx21, ebx16, ecx21, 0);
                        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 + 4 + 12);
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax30);
                        break;
                    case 3:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        ecx21 = reinterpret_cast<void**>(0);
                        eax31 = fun_45aff0(0, ebx16, esp17 + 24);
                        esp17 = esp17 - 4 - 4 - 4 + 4 + 8;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax31);
                        break;
                    case 4:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        ecx21 = reinterpret_cast<void**>(1);
                        eax32 = fun_45aff0(1, ebx16, esp17 + 24);
                        esp17 = esp17 - 4 - 4 - 4 + 4 + 8;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax32);
                        break;
                    case 10:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        eax33 = fun_45b080(ecx21, ebx16, esp17 + 24);
                        esp17 = esp17 - 4 - 4 - 4 + 4 + 8;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax33);
                        break;
                    case 11:
                        eax34 = *reinterpret_cast<void***>(ebp20 + 4);
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        if (!eax34) {
                            eax34 = reinterpret_cast<void**>("<null>");
                        }
                        eax37 = fun_45ac60(ecx21, eax34, v18, v14, v11, v7, v23, v25, v35, v36);
                        esp17 = esp17 - 4 - 4 + 4 + 4;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax37);
                        break;
                    case 12:
                        ecx21 = *reinterpret_cast<void***>(ebp20 + 4);
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        eax41 = fun_45ae20(ecx21, ebx16, esp17 + 24, v18, v14, v11, v7, v23, v25, v38, v39, v40);
                        esp17 = esp17 - 4 - 4 - 4 + 4 + 8;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax41);
                        break;
                    case 13:
                        __asm__("fmul dword [edi]");
                        ebp20 = ebp20 + 4;
                        eax42 = fun_55d4f0(ecx21, v18);
                        esp43 = reinterpret_cast<void*>(esp17 - 4 + 4);
                        v44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp43) + 24);
                        eax48 = fun_45ae20(eax42, ebx16, v44, v18, v14, v11, v7, v23, v25, v45, v46, v47);
                        eax49 = fun_45ac60(eax42, ", ", ebx16, v44, v18, v14, v11, v7, v23, v25);
                        __asm__("fld dword [edi+0x4]");
                        __asm__("fmul dword [0x5b2e3c]");
                        eax50 = fun_55d4f0(eax42, ", ", eax42, ", ");
                        esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 + 4);
                        ecx21 = eax50;
                        eax52 = fun_45ae20(ecx21, ebx16, reinterpret_cast<int32_t>(esp51) + 36, ", ", ebx16, v44, v18, v14, v11, v7, v23, v25);
                        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 + 4 + 20);
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax48) + reinterpret_cast<uint32_t>(eax49) + reinterpret_cast<uint32_t>(eax52);
                        break;
                    case 14:
                        __asm__("fmul dword [edi]");
                        ebp20 = ebp20 + 4;
                        eax53 = fun_55d4f0(ecx21, v18);
                        esp54 = reinterpret_cast<void*>(esp17 - 4 + 4);
                        v55 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp54) + 24);
                        eax59 = fun_45ae20(eax53, ebx16, v55, v18, v14, v11, v7, v23, v25, v56, v57, v58);
                        eax60 = fun_45ac60(eax53, ", ", ebx16, v55, v18, v14, v11, v7, v23, v25);
                        __asm__("fld dword [edi+0x4]");
                        __asm__("fmul dword [0x5b2e3c]");
                        eax61 = fun_55d4f0(eax53, ", ", eax53, ", ");
                        esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 + 4);
                        v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp62) + 36);
                        eax64 = fun_45ae20(eax61, ebx16, v63, ", ", ebx16, v55, v18, v14, v11, v7, v23, v25);
                        eax65 = fun_45ac60(eax61, ", ", ebx16, v63, ", ", ebx16, v55, v18, v14, v11);
                        __asm__("fld dword [edi+0x8]");
                        __asm__("fmul dword [0x5b2e3c]");
                        eax66 = fun_55d4f0(eax61, ", ", eax61, ", ");
                        esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 + 4);
                        ecx21 = eax66;
                        eax68 = fun_45ae20(ecx21, ebx16, reinterpret_cast<int32_t>(esp67) + 48, ", ", ebx16, v63, ", ", ebx16, v55, v18, v14, v11);
                        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 + 4 + 32);
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax59) + reinterpret_cast<uint32_t>(eax60) + reinterpret_cast<uint32_t>(eax64) + reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(eax68);
                        break;
                    case 15:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        eax70 = fun_45af50(ecx21, esp17 + 24, v18, v14, v11, v7, v23, v25, v69);
                        esp17 = esp17 - 4 - 4 + 4 + 4;
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax70);
                        break;
                    case 16:
                        __asm__("fstp st0");
                        ebp20 = ebp20 + 4;
                        eax73 = fun_45ac60(ecx21, "[[", v18, v14, v11, v7, v23, v25, v71, v72);
                        esp74 = reinterpret_cast<void*>(esp17 - 4 - 4 + 4);
                        v75 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp74) + 28);
                        eax76 = fun_45af50(ecx21, v75, "[[", v18, v14, v11, v7, v23, v25);
                        eax77 = fun_45ac60(ecx21, "], [", v75, "[[", v18, v14, v11, v7, v23, v25);
                        esp78 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp74) - 4 - 4 + 4 - 4 - 4 + 4);
                        ecx21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp78) + 36);
                        eax79 = fun_45af50(ecx21, ecx21, "], [", v75, "[[", v18, v14, v11, v7);
                        eax80 = fun_45ac60(ecx21, "], [", ecx21, "], [", v75, "[[", v18, v14, v11, v7);
                        esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp78) - 4 - 4 + 4 - 4 - 4 + 4);
                        v82 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp81) + 44);
                        eax83 = fun_45af50(ecx21, v82, "], [", ecx21, "], [", v75, "[[", v18, v14);
                        eax84 = fun_45ac60(ecx21, "], [", v82, "], [", ecx21, "], [", v75, "[[", v18, v14);
                        esp85 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 4 - 4 + 4 - 4 - 4 + 4);
                        v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp85) + 52);
                        eax87 = fun_45af50(ecx21, v86, "], [", v82, "], [", ecx21, "], [", v75, "[[");
                        eax88 = fun_45ac60(ecx21, "]]", v86, "], [", v82, "], [", ecx21, "], [", v75, "[[");
                        esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp85) - 4 - 4 + 4 - 4 - 4 + 4 + 36);
                        esi9 = esi9 + reinterpret_cast<uint32_t>(eax73) + reinterpret_cast<uint32_t>(eax76) + reinterpret_cast<uint32_t>(eax77) + reinterpret_cast<uint32_t>(eax79) + reinterpret_cast<uint32_t>(eax80) + reinterpret_cast<uint32_t>(eax83) + reinterpret_cast<uint32_t>(eax84) + reinterpret_cast<uint32_t>(eax87) + reinterpret_cast<uint32_t>(eax88);
                    }
                } else {
                    __asm__("fstp st0");
                    v23 = edi13 + 2;
                    fun_460fc0(ecx21, ebx16, "%", 1);
                    esp17 = esp17 - 4 - 4 - 4 - 4 + 4 + 12;
                    ++esi9;
                }
            } else {
                __asm__("fstp st0");
                fun_460fc0(ecx21, ebx16, edi13, 1);
                esp17 = esp17 - 4 - 4 - 4 - 4 + 4 + 12;
                v23 = edi13 + 1;
                ++esi9;
            }
            edi13 = v23;
        } while (*reinterpret_cast<void***>(edi13));
    }
    return esi9;
}

void** fun_461030(void** ecx, void** a2, ...) {
    void** eax3;

    eax3 = *reinterpret_cast<void***>(a2 + 16);
    if (!eax3) {
        return 1;
    } else {
        goto eax3;
    }
}
