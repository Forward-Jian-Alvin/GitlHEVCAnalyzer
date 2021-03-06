#ifndef RELOADFILTERSCOMMAND_H
#define RELOADFILTERSCOMMAND_H
#include <gitlabstractcommand.h>

class ReloadFiltersCommand : public GitlAbstractCommand
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit ReloadFiltersCommand(QObject *parent = 0);

    Q_INVOKABLE bool execute(GitlCommandParameter &rcInputArg, GitlCommandParameter &rcOutputArg);
signals:
    
public slots:
    
};

#endif // RELOADFILTERSCOMMAND_H
