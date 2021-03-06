/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class <GEOMapItem>, RTLOIDisplayInfo, RTPredictedLocationOfInterest;

@interface RTPLOIETA : NSObject {
    unsigned int _baselineETASeconds;
    RTLOIDisplayInfo *_displayInfo;
    <GEOMapItem> *_origin;
    RTPredictedLocationOfInterest *_ploi;
    unsigned int _responseETASeconds;
}

@property(readonly) RTPredictedLocationOfInterest * ploi;

- (void).cxx_destruct;
- (id)_displayInfoForDate:(id)arg1;
- (id)_preferredName;
- (id)_urlName;
- (id)description;
- (id)displayInfo;
- (bool)etaExceedsMinimumETA:(unsigned int)arg1;
- (bool)hasEquivalentDisplayTo:(id)arg1;
- (id)initWithPLOI:(id)arg1 origin:(id)arg2 responseETASeconds:(unsigned int)arg3 baselineETASeconds:(unsigned int)arg4;
- (id)localizedDescription;
- (id)mapsURL;
- (id)ploi;

@end
