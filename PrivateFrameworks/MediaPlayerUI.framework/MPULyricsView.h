/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSString, UITextView, _UIBackdropView;

@interface MPULyricsView : UIView {
    _UIBackdropView *_backdropView;
    NSString *_text;
    UITextView *_textView;
}

@property(copy) NSString * text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setText:(id)arg1;
- (id)text;

@end
