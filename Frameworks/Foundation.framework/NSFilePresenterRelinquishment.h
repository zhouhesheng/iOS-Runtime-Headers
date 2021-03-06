/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCountedSet;

@interface NSFilePresenterRelinquishment : NSObject {
    NSCountedSet *_blockingAccessClaimIDs;
    id _reacquirer;
}

- (bool)addBlockingAccessClaimID:(id)arg1;
- (void)dealloc;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(id)arg2;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)setReacquirer:(id)arg1;

@end
