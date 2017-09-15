//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
// UUID: 8ADEC8FA-6BA9-3156-9A0B-2EBB0853A4D2
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 18.1.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface NSDictionary (RKPredicateSupport)
- (id)objectForKeyPredicate:(id)arg1;
- (id)filteredDictionaryUsingKeyPredicate:(id)arg1;
- (id)filteredKeysUsingPredicate:(id)arg1;
@end

@interface NSLinguisticTagger (RKPrivate)
- (id)languageOfRange:(struct _NSRange)arg1;
@end

@interface NSString (NSString_FirstWordExtensions)
- (id)uppercaseFirstWordString;
- (id)lowercaseFirstWordString;
@end

@interface RKAssets : NSObject
{
}

+ (id)appreciationKeywords;
+ (id)alternativeInversions;
+ (id)polarTagKeywords;
+ (id)sensitiveSubjects;
+ (id)wordIDs;
+ (id)synonyms;
+ (id)fixedPhrases;
+ (id)categoryResponses;
+ (id)categoryKeywords;

@end

@interface RKClassification : NSObject
{
    int _sensitive;
    NSString *_language;
    unsigned long long _sentenceType;
    unsigned long long _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
}

@property(retain) NSString *taggedText; // @synthesize taggedText=_taggedText;
@property(retain) NSArray *customResponses; // @synthesize customResponses=_customResponses;
@property unsigned long long gender; // @synthesize gender=_gender;
@property(getter=isSensitive) int sensitive; // @synthesize sensitive=_sensitive;
@property unsigned long long sentenceType; // @synthesize sentenceType=_sentenceType;
@property(retain) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)init;

@end

@interface RKLexicalEntity : NSObject
{
    NSString *_string;
    NSString *_tokenType;
    NSString *_partOfSpeech;
    NSString *_lemma;
    NSString *_language;
    struct _NSRange _tokenRange;
}

@property struct _NSRange tokenRange; // @synthesize tokenRange=_tokenRange;
@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *lemma; // @synthesize lemma=_lemma;
@property(retain) NSString *partOfSpeech; // @synthesize partOfSpeech=_partOfSpeech;
@property(retain) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
@property(readonly) NSString *word;
- (id)description;

@end

@interface RKMessageClassifier : NSObject
{
}

+ (id)messageClassification:(id)arg1 withLanguageIdentifier:(id)arg2;

@end

@interface RKMessageResponseManager : NSObject
{
}

+ (id)sharedManager;
- (void)resetRegisteredResponsesForContext:(id)arg1;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)_init;
- (id)init;

@end

@interface RKResponseCollection : NSObject
{
    NSString *_context;
    NSMutableDictionary *_responseCatalog;
    NSMutableDictionary *_phraseMap;
}

+ (id)responseCollectionWithContext:(id)arg1;
@property(retain) NSMutableDictionary *phraseMap; // @synthesize phraseMap=_phraseMap;
@property(retain) NSMutableDictionary *responseCatalog; // @synthesize responseCatalog=_responseCatalog;
@property(retain) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dumpResponseCatalog;
- (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
- (id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)resetPhraseMap;
- (void)resetResponseCatalog;
- (id)_initWithContext:(id)arg1;
- (id)init;

@end

@interface RKSentenceClassifier : NSObject
{
    _Bool _sentenceIsTerminated;
    _Bool _sentenceIsAllSymbols;
    _Bool _sentenceHasQuestionTerminator;
    _Bool _sentenceHasAlternativeConjunction;
    NSString *_sentenceStringOriginal;
    NSString *_sentenceString;
    NSArray *_sentenceEntities;
    NSValue *_sentenceTag;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_choiceDelimiters;
    NSArray *_alternatives;
    NSArray *_appreciations;
}

+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (id)lexicalEntitiesFromString:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)polarTagKeywordsForLanguage:(id)arg1;
+ (id)sensitiveSubjectsForLanguage:(id)arg1;
+ (id)keywordMap;
+ (unsigned long long)categoryForPreferenceKey:(id)arg1;
+ (id)preferenceKeyForCategory:(unsigned long long)arg1;
+ (id)keyToCategoryMap;
+ (_Bool)canClassifyLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (id)languageIdentifierFromClassName;
@property(retain) NSArray *appreciations; // @synthesize appreciations=_appreciations;
@property(retain) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property(retain) NSArray *choiceDelimiters; // @synthesize choiceDelimiters=_choiceDelimiters;
@property(retain) NSArray *interrogatives; // @synthesize interrogatives=_interrogatives;
@property(retain) NSArray *inversions; // @synthesize inversions=_inversions;
@property(retain) NSValue *sentenceTag; // @synthesize sentenceTag=_sentenceTag;
@property _Bool sentenceHasAlternativeConjunction; // @synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction;
@property _Bool sentenceHasQuestionTerminator; // @synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator;
@property _Bool sentenceIsAllSymbols; // @synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols;
@property _Bool sentenceIsTerminated; // @synthesize sentenceIsTerminated=_sentenceIsTerminated;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *sentenceString; // @synthesize sentenceString=_sentenceString;
@property(retain) NSString *sentenceStringOriginal; // @synthesize sentenceStringOriginal=_sentenceStringOriginal;
- (void).cxx_destruct;
- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;
- (id)languageIdentifier;
@property(readonly) NSString *alternativeConjunction;

@end

@interface RKSentenceClassifier_de_DE : RKSentenceClassifier
{
}

- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunction;

@end

@interface RKSentenceClassifier_en_US : RKSentenceClassifier
{
}

+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1;
- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunction;

@end

@interface RKSentenceClassifier_es_ES : RKSentenceClassifier
{
}

- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunction;

@end

@interface RKSentenceClassifier_fr_FR : RKSentenceClassifier
{
}

- (id)classifySentence;
- (void)analyzeSentence;
- (id)alternativeConjunction;

@end

@interface RKSentenceClassifier_it_IT : RKSentenceClassifier
{
}

- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunction;

@end

@interface RKSynonymizer : NSObject
{
    NSString *_synonymLanguage;
    NSString *_keyboardLanguage;
    NSString *_context;
    NSDictionary *_synonymDictionary;
    NSDictionary *_wordIDDictionary;
    void *_model;
}

+ (id)synonymizerForLanguage:(id)arg1 keyboardLanguage:(id)arg2 context:(id)arg3;
+ (id)synonymLanguageForLanguage:(id)arg1 keyboardLanguage:(id)arg2;
+ (id)wordIDDictionaryForLanguage:(id)arg1;
+ (id)synonymDictionaryForLanguage:(id)arg1;
+ (void *)createLanguageModelForLanguage:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id)synonymForString:(id)arg1;
- (id)preferredSynonymFromSynonyms:(id)arg1 forString:(id)arg2;
- (_Bool)scoreForString:(id)arg1 score:(double *)arg2;
- (id)synonymsForString:(id)arg1;
- (void)dealloc;
- (id)initWithSynonymLanguage:(id)arg1 keyboardLanguage:(id)arg2 context:(id)arg3 synonymDictionary:(id)arg4 wordIDDictionary:(id)arg5;

@end

@interface _RKResponse : NSObject
{
    NSString *_text;
    unsigned long long _type;
}

@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

