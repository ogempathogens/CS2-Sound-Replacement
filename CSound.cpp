// inside your hooks setup, obv call it;
addHook(Detour::CWpnSound.initialize(&hkCWpnSound, Manager::pattern("48 89 5C 24 ? 56 48 83 EC ? 48 63 F2")));

__int64 __fastcall Hooks::hkCWpnSound(__int64 CVSoundTypeManager, int arg2)
{
        auto originalFunc = Detour::CWpnSound.GetOriginal<decltype(&hkCWpnSound)>();
        __int64 originalResult = originalFunc(CVSoundTypeManager, arg2);

        // cast to string for comparing
        const char *sndPath = (const char*)originalResult;


        // on: og sound -> custom sound
        static const std::pair<const char*, const char*> soundReps[] = {
                // usage;
                {"sounds/weapons/something.vsnd", "sounds/weapons/something/something_new.vnsd_c"},
                // example: change the fire sound of ak47;
                {"sounds/weapons/ak47/ak47_01.vsnd", "sounds/weapons/custom_ak47/ak47_01.vnsd_c"}
        };


        for (const auto &[oldSound, newSound] : soundReps)
        {
                if (strstr(sndPath, oldSound))
                {
                        // if we found a match, replace the og sound with the custom one; 
                        return (__int64)newSound;
                }
        }

        return originalResult;
}