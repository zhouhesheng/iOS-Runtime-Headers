/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libdispatch.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OS_dispatch_data_empty : OS_dispatch_data {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)load;

- (void*)_getContext;
- (void)_setContext:(void*)arg1;
- (void)_setFinalizer:(int (*)())arg1;
- (void)_setTargetQueue:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
