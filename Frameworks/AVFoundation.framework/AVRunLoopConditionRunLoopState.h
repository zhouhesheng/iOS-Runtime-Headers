/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopConditionRunLoopState : NSObject {
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_signalSource;
    bool_signaled;
}

@property(readonly) struct __CFRunLoop { }* runLoop;
@property struct __CFRunLoopSource { }* signalSource;
@property bool signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { }*)arg1;

- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;
- (struct __CFRunLoop { }*)runLoop;
- (void)setSignalSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setSignaled:(bool)arg1;
- (struct __CFRunLoopSource { }*)signalSource;
- (bool)signaled;

@end
