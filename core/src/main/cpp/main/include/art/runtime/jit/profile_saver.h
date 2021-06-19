//
// Created by loves on 6/19/2021.
//

#ifndef LSPATCH_PROFILE_SAVER_H
#define LSPATCH_PROFILE_SAVER_H

#include <base/object.h>

namespace art{
        CREATE_MEM_HOOK_STUB_ENTRIES(
                "_ZN3art12ProfileSaver20ProcessProfilingInfoEbPt",
                bool,  ProcessProfilingInfo, (void* thiz, bool, uint16_t*), {
                    LOGD("skipped profile saving");
                    return true;
                });

        CREATE_MEM_HOOK_STUB_ENTRIES(
                "_ZN3art12ProfileSaver20ProcessProfilingInfoEbbPt",
                bool,  ProcessProfilingInfoWithBool, (void* thiz, bool, bool, uint16_t*), {
                    LOGD("skipped profile saving");
                    return true;
                });


        static void DisableInline(const SandHook::ElfImg &handle) {
            lspd::HookSyms(handle, ProcessProfilingInfo, ProcessProfilingInfoWithBool);
        }
}


#endif //LSPATCH_PROFILE_SAVER_H
