@interface IssueObjectCell : UITableViewCell
@property(nonatomic,strong)id issueObject;

+ (id)cellWithReuseIdentifier:(NSString *)reuseIdentifier;
- (void)hideRepo;
@end