#include <string>
#include <fstream>

#include "obsidian_task.h"

class TasksAuthor {
    std::string mVault_path;
    std::string mTasks_filename;

    /*
    Creates the markdown file we are allowed to write in if it does not exist already

    @param filename (string) - specifies how the file should be named
    @return the absolute path to that file
    */
    void create_tasks_file();

    /*
    Writes a line at the end of the markdown file

    @param content (std::string) - holds the characters that will be written into the file
    */
    void write_line(const std::string content);

    /*
    TODO:
    */
    void delete_line(int line_number);

    public:
        /*
        Default constructor

        @param vault_path (std::string) - specifies the path to the obsidian vault
        */
        TasksAuthor(std::string vault_path);
        
        /*
        Copy Constructor

        @param tasks_author (TasksAuthor&) - 
        */
        TasksAuthor(const TasksAuthor& tasks_author);
        
        /*
        Move Constructor

        @param tasks_author (TasksAuthor&&) - 
        */
        TasksAuthor(TasksAuthor&& tasks_author);

        /*
        Destructor
        */
        ~TasksAuthor();

        /*
        Returns the path of the handled obsidian vault
        */
        const std::string get_vault_path();

        /*
        Returns the full path of the tasks filename
        */
        std::string get_tasks_filepath();

        /*
        Writes a task into the obsidian vault

        @param obsidian_task (ObsidianTask*) - specifies all task related values to be written into the vault
        */
        void write_task(const ObsidianTask *obsidian_task);

        /*
        Deletes a task from the obsidian vault

        @param obsidian_task (ObsidianTask*) - specifies the task to be deleted
        */
        void delete_task(ObsidianTask *obsidian_task);
};