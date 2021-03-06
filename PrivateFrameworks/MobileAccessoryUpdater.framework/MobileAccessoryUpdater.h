/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@class <FudConnection>, <MobileAccessoryUpdaterDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface MobileAccessoryUpdater : NSObject {
    NSString *_activeFilter;
    NSString *_bundleIdentifier;
    char *_cClientIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_clientIdentifier;
    <FudConnection> *_connection;
    <MobileAccessoryUpdaterDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    bool_didUnregister;
    bool_isInternalClient;
}

- (id)activeFilter;
- (id)bundleIdentifier;
- (id)clientIdentifier;
- (void)createConnection;
- (void)dealloc;
- (bool)doesOperationCodeRequireFilter:(int)arg1;
- (id)getActiveDeviceClass;
- (const char *)getActiveDeviceClassCString;
- (int)getOperationCodeFromName:(id)arg1;
- (void)handleInboundEvent:(id)arg1;
- (id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(bool)arg2 delegate:(id)arg3 isInternalClient:(bool)arg4 options:(id)arg5 error:(id*)arg6;
- (void)performNextStepWithOptions:(id)arg1;
- (void)performStep:(id)arg1 withOptions:(id)arg2;
- (id)queryNextStep:(id*)arg1;
- (bool)registerForIdentifier:(id)arg1 isGroupIdentifier:(bool)arg2;
- (bool)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(bool)arg3 replyHandler:(id)arg4;
- (bool)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(bool)arg3;
- (bool)setActiveDeviceClass:(id)arg1;
- (bool)setLastRemoteFindDate:(id)arg1;
- (void)unregister;

@end
