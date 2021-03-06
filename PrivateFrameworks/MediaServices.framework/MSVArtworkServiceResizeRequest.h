/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {
    NSMutableArray *_resizeDestinations;
    NSURL *_sourceURL;
    bool_overwriteExistingDestinations;
}

@property bool overwriteExistingDestinations;
@property(retain) NSMutableArray * resizeDestinations;
@property(copy) NSURL * sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDestinationWithSize:(struct CGSize { double x1; double x2; })arg1 url:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDestinationsUsingBlock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;
- (Class)operationClass;
- (bool)overwriteExistingDestinations;
- (id)resizeDestinations;
- (void)setOverwriteExistingDestinations:(bool)arg1;
- (void)setResizeDestinations:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
