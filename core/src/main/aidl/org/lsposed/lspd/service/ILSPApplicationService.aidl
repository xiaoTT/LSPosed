package org.lsposed.lspd.service;

import org.lsposed.lspd.service.Module;

interface ILSPApplicationService {
    IBinder requestModuleBinder(String name) = 2;

    IBinder requestManagerBinder(String packageName) = 3;

    boolean isResourcesHookEnabled() = 5;

    List<Module> getModulesList(String processName) = 6;

    String getPrefsPath(String packageName) = 7;

    ParcelFileDescriptor getModuleLogger() = 9;

    Bundle requestRemotePreference(String packageName, int userId, IBinder callback) = 10;
}
