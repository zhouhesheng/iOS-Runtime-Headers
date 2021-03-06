/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView {
    CABackdropLayer *_backdropLayer;
    double _zoom;
}

@property(retain) CABackdropLayer * backdropLayer;
@property double zoom;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)backdropLayer;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setBackdropLayer:(id)arg1;
- (void)setZoom:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)zoom;

@end
