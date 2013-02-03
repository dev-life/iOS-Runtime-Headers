/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject<AVConferenceNotificationObserver>, NSTimer, NSObject<AVConferenceDelegate>, CALayer, NSMutableDictionary;

@interface AVConference : NSObject {
    NSObject<AVConferenceDelegate> *delegate;
    NSObject<AVConferenceNotificationObserver> *genericObserver;
    CALayer *networkQualityGraphLayer_;
    NSTimer *networkQualityUpdateTimer_;
    NSMutableDictionary *notificationDictionary;
    struct dispatch_queue_s { } *notificationQueue;
    id opaqueConf;
    BOOL runningInServer;
    void *serverConnection;
    BOOL shouldDisplayNetworkQualityGraph_;
    BOOL testIsRunning;
    BOOL useServer;
}

@property NSObject<AVConferenceDelegate> *delegate;
@property NSObject<AVConferenceNotificationObserver> *genericObserver;
@property void *localVideoBackLayer;
@property void *localVideoLayer;
@property(retain) CALayer *networkQualityGraphLayer;
@property(retain) NSTimer *networkQualityUpdateTimer;
@property void *remoteVideoBackLayer;
@property void *remoteVideoLayer;
@property NSUInteger cameraType;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property(readonly) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(getter=getLocalBitrate,readonly) double localBitrate;
@property(getter=getLocalFramerate,readonly) double localFramerate;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(readonly) BOOL natType;
@property NSUInteger orientation;
@property(readonly) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=getRemoteBitrate,readonly) double remoteBitrate;
@property(getter=getRemoteFramerate,readonly) double remoteFramerate;
@property BOOL requiresWifi;
@property BOOL shouldDisplayNetworkQualityGraph;
@property(getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;

+ (short)addressPointerFromBlob:(id)arg1;
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;

- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (void)addTransaction:(id)arg1 outputDictionary:(id*)arg2;
- (void)applyServerInfo:(id)arg1;
- (NSUInteger)cameraType;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(NSInteger*)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)genericObserver;
- (BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (double)getLocalBitrate;
- (double)getLocalFramerate;
- (NSInteger)getLocalVideoSlot:(BOOL)arg1;
- (double)getRemoteBitrate;
- (double)getRemoteFramerate;
- (NSInteger)getRemoteVideoSlot:(BOOL)arg1;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (id)init;
- (id)initWithFlags:(NSInteger)arg1;
- (float)inputMeterLevel;
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingViceroyBlobFormat;
- (void)listenForNotifications;
- (id)localDisplayNameForCallID:(NSInteger)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (BOOL)natType;
- (float)networkQuality;
- (double)networkQualityForCallID:(NSInteger)arg1;
- (id)networkQualityGraphLayer;
- (id)networkQualityUpdateTimer;
- (NSUInteger)orientation;
- (float)outputMeterLevel;
- (void)processApplicationQuery:(id)arg1 responseDict:(id*)arg2;
- (void)processCancelRelayRequest:(NSInteger)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayRequestResponse:(NSInteger)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(NSInteger)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processServerSideApplicationQuery:(id)arg1 responseDict:(id*)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)remoteCancelledCallID:(NSInteger)arg1;
- (id)remoteDisplayNameForCallID:(NSInteger)arg1;
- (void*)remoteVideoBackLayer;
- (void*)remoteVideoLayer;
- (BOOL)requiresWifi;
- (BOOL)setActive:(BOOL)arg1;
- (void)setCameraType:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setGenericObserver:(id)arg1;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setNetworkQualityGraphLayer:(id)arg1;
- (void)setNetworkQualityUpdateTimer:(id)arg1;
- (void)setOrientation:(NSUInteger)arg1;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (void)setPeerCN:(id)arg1 callID:(NSInteger)arg2;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setRequiresWifi:(BOOL)arg1;
- (BOOL)setServerInfo:(id)arg1;
- (void)setSetSessionID:(id)arg1 forCallID:(NSInteger)arg2;
- (void)setShouldDisplayNetworkQualityGraph:(BOOL)arg1;
- (void)setUseViceroyBlobFormat:(BOOL)arg1;
- (BOOL)shouldDisplayNetworkQualityGraph;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(NSInteger)arg2 connectionID:(id)arg3 usingBlob:(id)arg4 isCaller:(BOOL)arg5 capabilities:(id)arg6 error:(id*)arg7;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(NSInteger)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 error:(id*)arg6;
- (void)startNetworkQualityUpdateTimer;
- (BOOL)startPreviewWithError:(id*)arg1;
- (void)stopCallID:(NSInteger)arg1;
- (void)stopListeningForNotifications;
- (void)stopNetworkQualityUpdateTimer;
- (void)stopPreview;
- (void)testIsPausedProc:(id)arg1;
- (void)updateGKSConnectivitySettings;
- (BOOL)updateNetworkQualityGraph;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(NSInteger)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(NSInteger)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 notificationEvent:(id)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)warmupForCall;

@end