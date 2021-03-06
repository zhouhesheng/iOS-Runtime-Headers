/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    struct CGSize { 
        double width; 
        double height; 
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { 
        struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { 
            struct Texture2D {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> > { 
        struct __compressed_pair<ggl::TextureBuffer *, std::__1::default_delete<ggl::TextureBuffer> > { 
            struct TextureBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
        struct __compressed_pair<ggl::IOSurfaceTexture *, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
            struct IOSurfaceTexture {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> > { 
        struct __compressed_pair<ggl::TextureBuffer *, std::__1::default_delete<ggl::TextureBuffer> > { 
            struct TextureBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation> > { 
        struct __compressed_pair<ggl::RenderTargetOperation *, std::__1::default_delete<ggl::RenderTargetOperation> > { 
            struct RenderTargetOperation {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    } _colorBuffer;
    } _colorTexture;
    double _contentScale;
    } _depthStencilBuffer;
    } _flippedColorBuffer;
    } _flippedRenderTarget;
    } _flippedSurfaceTexture;
    } _msaaBlitOperation;
    } _msaaColorBuffer;
    } _msaaDepthStencilBuffer;
    } _msaaRenderTarget;
    } _renderTarget;
    } _size;
    bool_canMakeImage;
    bool_recreateRenderTarget;
    bool_useMultisampling;
}

@property(readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); /* Warning: unhandled struct encoding: '{basic_string<char' */ struct x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; unsigned short x29; void*x30; short x31; void*x32; void*x33; void*x34; void*x35; unsigned long x36; int x37; unsigned int x38/* : ? */; const void*x39; const void*x40; void*x41; void*x42; const int x43; void x44; void*x45; void*x46; void*x47; void*x48; const void*x49; void*x50; void*x51; void*x52; out const void*x53; short x54; void*x55; boolx56; void*x57; short x58; void*x59; boolx60; out void*x61; const double x62; void*x63; float x64; const void*x65; void*x66; void*x67; void*x68; out const void*x69; void*x70; boolx71; void*x72; short x73; void*x74; boolx75; out void*x76; const double x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; in void*x114; short x115; void*x116; int x117; void*x118; void*x119; void*x120; in void*x121; void*x122; void*x123; double x124; void*x125; void*x126; void*x127; int x128; void*x129; in void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; unsigned int x153/* : ? */; void*x154; out void*x155; out void*x156; long x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; }* renderTarget; /* unknown property attribute:  std::__1::allocator<ggl::FragmentBuffer *> >=^^{FragmentBuffer}}}^{FragmentBuffer}IIB} */
@property(readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); struct x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; id x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; in void*x31; short x32; void*x33; int x34; void*x35; void*x36; void*x37; in void*x38; void*x39; void*x40; double x41; void*x42; void*x43; void*x44; int x45; void*x46; in void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; unsigned int x70/* : ? */; void*x71; out void*x72; out void*x73; long x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; }* msaaRenderTarget; /* unknown property attribute:  std::__1::allocator<ggl::FragmentBuffer *> >=^^{FragmentBuffer}}}^{FragmentBuffer}IIB} */
@property(readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); struct x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; unsigned short x29; void*x30; short x31; void*x32; void*x33; void*x34; void*x35; unsigned long x36; int x37; unsigned int x38/* : ? */; const void*x39; const void*x40; void*x41; void*x42; const int x43; void x44; void*x45; void*x46; void*x47; void*x48; const void*x49; void*x50; void*x51; void*x52; out const void*x53; short x54; void*x55; unsigned int x56; void*x57; void*x58; out void*x59; in double x60; void*x61; void*x62; int x63; out in void*x64; float x65; const void*x66; void*x67; void*x68; void*x69; out const void*x70; void*x71; unsigned int x72; void*x73; void*x74; out void*x75; in double x76; void*x77; void*x78; int x79; out in void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; inout short x106; void*x107; double x108; SEL x109; SEL x110; void*x111; void*x112; void*x113; SEL x114; SEL x115; void*x116; long x117; long x118; out BOOL x119; void*x120; void*x121; out const void*x122; inout void*x123; void*x124; void*x125; out const void*x126; void*x127; double x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; struct NetworkEdge {} *x135; }* finalRenderTarget; /* unknown property attribute:  std::__1::allocator<ggl::FragmentBuffer *> >=^^{FragmentBuffer}}}^{FragmentBuffer}IIB} */
@property(readonly) float averageFPS;
@property double contentScale;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) struct RenderTargetOperation { int (**x1)(); int x2; }* msaaBlitOperation;
@property struct CGSize { double x1; double x2; } size;
@property(readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property(readonly) Class superclass;
@property(readonly) bool useMultisampling;

- (struct RenderTargetOperation { int (**x1)(); int x2; }*)msaaBlitOperation;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct vector<ggl::FragmentBuffer *, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_6_1_1; struct FragmentBuffer {} **x_6_1_2; struct __compressed_pair<ggl::FragmentBuffer **, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_3_2_1; } x_6_1_3; } x6; struct FragmentBuffer {} *x7; unsigned int x8; unsigned int x9; boolx10; }*)finalRenderTarget;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct vector<ggl::FragmentBuffer *, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_6_1_1; struct FragmentBuffer {} **x_6_1_2; struct __compressed_pair<ggl::FragmentBuffer **, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_3_2_1; } x_6_1_3; } x6; struct FragmentBuffer {} *x7; unsigned int x8; unsigned int x9; boolx10; }*)msaaRenderTarget;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct vector<ggl::FragmentBuffer *, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_6_1_1; struct FragmentBuffer {} **x_6_1_2; struct __compressed_pair<ggl::FragmentBuffer **, std::__1::allocator<ggl::FragmentBuffer *> > { struct FragmentBuffer {} **x_3_2_1; } x_6_1_3; } x6; struct FragmentBuffer {} *x7; unsigned int x8; unsigned int x9; boolx10; }*)renderTarget;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createMSAARenderTarget;
- (void)_createRenderTarget;
- (void)_destroyMSAARenderTarget;
- (void)_destroyRenderTarget;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapDataWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; }*)arg1;
- (double)contentScale;
- (void)didDrawView;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMultisampling:(bool)arg3;
- (struct CGImage { }*)newImageWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; }*)arg1;
- (void)setContentScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (bool)useMultisampling;
- (void)willDrawView;

@end
