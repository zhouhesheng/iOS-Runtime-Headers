/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {
    double _rotation;
    NSString *_string;
}

@property(readonly) double rotation;
@property(readonly) NSString * string;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;
- (double)rotation;
- (id)string;

@end
