/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUICountdown, SKUICountdownView, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    NSString *_accessibilityLabel;
    SKUIClientContext *_clientContext;
    SKUICountdownView *_countdownView;
    } _itemImageInsets;
    UIImageView *_itemImageView;
    UIImageView *_overlayImageView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    bool_itemImageHidden;
}

@property(copy) NSString * accessibilityLabel;
@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUICountdown * countdown;
@property(retain) UIImage * itemImage;
@property(getter=isItemImageHidden) bool itemImageHidden;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } itemImageInsets;
@property(readonly) UIView * itemImageView;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (void)_reloadHighlight;
- (void)_removeOverlay;
- (id)accessibilityLabel;
- (id)clientContext;
- (id)countdown;
- (bool)isItemImageHidden;
- (id)itemImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })itemImageInsets;
- (id)itemImageView;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setCountdown:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemImageHidden:(bool)arg1;
- (void)setItemImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end