/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable, VKPShieldPack;

@interface VKShieldAtlas : NSObject {
    NSMapTable *_atlasToImages;
    VKPShieldPack *_shieldPack;
}

- (id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 numberOfLines:(unsigned long long)arg5 genericShieldGenerator:(id)arg6 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg7;
- (void)dealloc;
- (id)initWithShieldPack:(id)arg1;
- (void)purge;

@end
