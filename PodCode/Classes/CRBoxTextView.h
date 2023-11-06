//
//  CRBoxTextView.h
//  CRBoxInputView
//
//  Created by Chobits on 2019/1/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CRBoxTextView : UITextField

/**
 输入校正
 autocorrectionType
 default is UITextAutocorrectionTypeDefault
 */
@property (assign, nonatomic) UITextAutocorrectionType autocorrectionType;

@end

NS_ASSUME_NONNULL_END
