/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardNameControl;



@interface ABCardNameInternalView : UIControl 
{
    ABCardNameControl *_cardNameControl;
    BOOL _drawName;
}


- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 cardNameControl:(id)arg2 namePart:(BOOL)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end