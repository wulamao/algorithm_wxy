

Angular Message:
>   // Header
    <type>(scope): <subject>
    // Blank line
    Body
    // Blank line
    Footer

*其中，header 是必需的，body 和 footer 可以省略。
每一行不应超过72个字符（或100个字符），避免自动换行影响美观。

type
>    "docs",     // Adds or alters documentation. 仅仅修改了文档，比如README, CHANGELOG, CONTRIBUTE等等
    "chore",    // Other changes that don't modify src or test files. 改变构建流程、或者增加依赖库、工具等
    "feat",     // Adds a new feature. 新增feature
    "fix",      // Solves a bug. 修复bug
    "merge",    // Merge branch ? of ?.
    "perf",     // Improves performance. 优化相关，比如提升性能、体验
    "refactor", // Rewrites code without feature, performance or bug changes. 代码重构，没有加新功能或者修复bug
    "revert",    // Reverts a previous commit. 回滚到上一个版本                
    "style",    // Improves formatting, white-space. 仅仅修改了空格、格式缩进、都好等等，不改变代码逻辑                
    "test"     // Adds or modifies tests. 测试用例，包括单元测试、集成测试等  
 
*如果type为feat和fix，则该 commit 将肯定出现在 Change log 之中。其他情况（docs、chore、style、refactor、test）由你决定，要不要放入 Change log，建议是不要。

scope
scope用于说明 commit 影响的范围，比如数据层、控制层、视图层等等，视项目不同而不同。
    例如在Angular，可以是$location, $browser, $compile, $rootScope, ngHref, ngClick, ngView等。

subject
subject是 commit 目的的简短描述，不超过50个字符。

其他注意事项：
以动词开头，使用第一人称现在时，比如change，而不是changed或changes
第一个字母小写
结尾不加句号（.）

Body
Body 部分是对本次 commit 的详细描述，可以分成多行。下面是一个范例。
    More detailed explanatory text, if necessary.  Wrap it to 
    about 72 characters or so. 

    Further paragraphs come after blank lines.

    - Bullet points are okay, too
    - Use a hanging indent
 
有两个注意点:

使用第一人称现在时，比如使用change而不是changed或changes。
永远别忘了第2行是空行
应该说明代码变动的动机，以及与以前行为的对比。


Footer
- 不兼容变动
- 关闭Issue (#issue)

Revert
还有一种特殊情况，如果当前 commit 用于撤销以前的 commit，则必须以revert:开头，后面跟着被撤销 Commit 的 Header

    revert: feat(pencil): add 'graphiteWidth' option

    This reverts commit 667ecc1654a317a13331b17617d973392f415f02.

Body部分的格式是固定的，必须写成This reverts commit hash>.，其中的hash是被撤销 commit 的 SHA 标识符。

如果当前 commit 与被撤销的 commit，在同一个发布（release）里面，那么它们都不会出现在 Change log 里面。如果两者在不同的发布，那么当前 commit，会出现在 Change log 的Reverts小标题下面。



生成commit：
工具: commitizen

生成Changelog
工具：conventional-changelog