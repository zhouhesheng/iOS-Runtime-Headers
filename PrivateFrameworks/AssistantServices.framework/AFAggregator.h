/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAggregator : NSObject {
    double _startTime;
    unsigned long long _type;
    bool_hasActiveRequest;
    bool_retryPrefersWWAN;
    bool_sessionIsRetrying;
}

@property unsigned long long connectionType;
@property bool hasActiveRequest;

+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logPingTimeout;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;

- (void)beginSessionRetryPreferringWWAN:(bool)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (unsigned long long)connectionType;
- (bool)hasActiveRequest;
- (void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2;
- (void)recordSessionRetrySuccess;
- (void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(bool)arg2 forTimeInterval:(double)arg3;
- (void)setConnectionType:(unsigned long long)arg1;
- (void)setHasActiveRequest:(bool)arg1;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;

@end
