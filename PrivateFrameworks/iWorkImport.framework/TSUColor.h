/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSUColor : NSObject <NSCopying, TSSPreset, TSSPresetSource, TSSThemeAsset> {
    struct CGColor { } *mCGColor;
}

@property(readonly) struct CGColor { }* CGColor;
@property(readonly) NSString * presetKind;

+ (id)blackColor;
+ (id)blueColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)presetKinds;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(double*)arg1;
- (id)grayscaleColor;
- (double)greenComponent;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Color { }*)arg1 unarchiver:(id)arg2;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithMessage:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; unsigned int x14[1]; }*)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (bool)isAlmostEqualToColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (bool)isThemeEquivalent:(id)arg1;
- (double)luminance;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)presetKind;
- (double)redComponent;
- (void)saveToArchive:(struct Color { }*)arg1 archiver:(id)arg2;
- (void)saveToMessage:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; unsigned int x14[1]; }*)arg1;

@end
