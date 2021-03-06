/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int localSearchProviderID : 1; 
    NSMutableArray *_actionCaptures;
    unsigned long long _businessID;
    } _has;
    int _localSearchProviderID;
    long long _placeID;
    } _sessionID;
}

@property(retain) NSMutableArray * actionCaptures;
@property unsigned long long businessID;
@property bool hasBusinessID;
@property bool hasLocalSearchProviderID;
@property bool hasPlaceID;
@property bool hasSessionID;
@property int localSearchProviderID;
@property long long placeID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;

- (id)actionCaptureAtIndex:(unsigned long long)arg1;
- (id)actionCaptures;
- (unsigned long long)actionCapturesCount;
- (void)addActionCapture:(id)arg1;
- (unsigned long long)businessID;
- (void)clearActionCaptures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessID;
- (bool)hasLocalSearchProviderID;
- (bool)hasPlaceID;
- (bool)hasSessionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (long long)placeID;
- (bool)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setActionCaptures:(id)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasPlaceID:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
