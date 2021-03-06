/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    ISLoadURLBagOperation *_operation;
    bool_forceInvalidationForNextLoad;
}

+ (id)URLBagForContext:(id)arg1;

- (void).cxx_destruct;
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(id)arg2;
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;
- (id)existingBagDictionary;
- (void)getTrustForURL:(id)arg1 completionBlock:(id)arg2;
- (void)invalidate;
- (void)loadValueForKey:(id)arg1 completionBlock:(id)arg2;
- (void)loadWithCompletionBlock:(id)arg1;
- (id)storeFrontIdentifier;
- (id)valueForKey:(id)arg1 error:(id*)arg2;

@end
