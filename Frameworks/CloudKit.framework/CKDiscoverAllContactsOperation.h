/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation {
    id _discoverAllContactsCompletionBlock;
    NSMutableArray *_discoveredUserInfos;
}

@property(copy) id discoverAllContactsCompletionBlock;
@property(retain) NSMutableArray * discoveredUserInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)discoverAllContactsCompletionBlock;
- (id)discoveredUserInfos;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverAllContactsCompletionBlock:(id)arg1;
- (void)setDiscoveredUserInfos:(id)arg1;

@end
