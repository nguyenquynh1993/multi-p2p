package oversim.applications.i3.i3Apps;

import oversim.common.ITier;


simple I3LatencyStretch like ITier
{
    parameters:
        int clientPort;
        int serverPort;
        double triggerRefreshTime @unit(s);
        double sampleRefreshTime @unit(s);
        double bootstrapTime @unit(s);
        double initTime @unit(s);
        int cacheSize;
        double idStoreTime @unit(s);
        volatile double serverTimeout @unit(s);
        int useSampling;

    gates:
        input udpIn;
        input from_lowerTier;
        input from_upperTier;
        output udpOut;
        output to_lowerTier;
        output to_upperTier;
}
