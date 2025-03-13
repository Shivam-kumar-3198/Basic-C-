// main.cpp
// A complete Wt-based web app for a simple text-based adventure game.
// Make sure to have Wt installed and configured in your build system.

#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>
#include <Wt/WVBoxLayout.h>
#include <memory>
#include <string>
#include <vector>
#include <utility>

using namespace Wt;
using namespace std;

// A Scene holds a description and three numbered options.
// Each option is a pair: (button text, next scene index).
struct Scene {
    string description;
    vector<pair<string, int>> options;
};

//
// AdventureApp is our main application class.
//
class AdventureApp : public WApplication {
public:
    AdventureApp(const WEnvironment& env)
        : WApplication(env), currentSceneId(0)
    {
        setTitle("Magical Adventure Game");
        root()->setWidth(WLength("100%"));

        // Create a container widget for our content.
        content_ = root()->addWidget(make_shared<WContainerWidget>());
        content_->setLayout(make_shared<WVBoxLayout>());

        // Initialize the game scenes.
        initScenes();
        // Display the starting scene.
        showScene(currentSceneId);
    }

private:
    shared_ptr<WContainerWidget> content_;
    int currentSceneId;
    vector<Scene> scenes;  // Our array of game scenes.

    // Initialize all the scenes for the adventure.
    void initScenes() {
        scenes.clear();

        // Scene 0: Start of adventure.
        scenes.push_back({
            "Welcome to the Magical Adventure! You are at the start of a wondrous journey. Choose your path:",
            { {"Enter the forest", 1}, {"Visit the castle", 2}, {"Sail the enchanted river", 3} }
        });

        // Scene 1: The forest.
        scenes.push_back({
            "You enter the forest. Talking animals greet you and the trees whisper secrets. What do you do?",
            { {"Follow a friendly deer", 4}, {"Climb a huge ancient tree", 5}, {"Pick some magical flowers", 6} }
        });

        // Scene 2: The castle.
        scenes.push_back({
            "You approach a grand castle with shining towers. It feels full of wonder. What will you do?",
            { {"Talk to a wise wizard", 7}, {"Explore the treasure room", 8}, {"Dance in the grand hall", 9} }
        });

        // Scene 3: The enchanted river.
        scenes.push_back({
            "You sail on an enchanted river. The water glitters like stars. What do you do?",
            { {"Steer the boat through a rainbow", 10}, {"Sing a cheerful song with the crew", 11}, {"Relax and enjoy the gentle journey", 12} }
        });

        // Scene 4: Forest ending (following the deer).
        scenes.push_back({
            "The friendly deer leads you to a secret garden of magical surprises! Your journey ends with a heart full of joy.",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 5: Forest ending (climbing the tree).
        scenes.push_back({
            "You climb the ancient tree and see a breathtaking view of your enchanted world. Your adventure ends with wonder.",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 6: Forest ending (picking flowers).
        scenes.push_back({
            "The magical flowers burst into a riot of colors and giggles, filling your heart with delight. Adventure complete!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 7: Castle ending (talking to the wizard).
        scenes.push_back({
            "The wise wizard showers you with magical gifts and kind words. Your castle adventure ends with excitement!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 8: Castle ending (exploring the treasure room).
        scenes.push_back({
            "You explore the treasure room and discover wonders beyond your dreams. The castle adventure fills you with joy!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 9: Castle ending (dancing in the hall).
        scenes.push_back({
            "You dance in the grand hall, and your laughter fills the castle with magic. A delightful celebration is born!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 10: River ending (steering the boat).
        scenes.push_back({
            "You steer the boat through a rainbow and witness magical lands on the horizon. Your river journey ends with awe!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 11: River ending (singing with the crew).
        scenes.push_back({
            "You sing a cheerful song with the crew, making the river sparkle with joy. A merry adventure is complete!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });

        // Scene 12: River ending (relaxing on the boat).
        scenes.push_back({
            "You relax and let the gentle river guide you into peaceful dreams. Your adventure drifts to a serene close!",
            { {"Restart Adventure", 0}, {"Play Again", 0}, {"Try Another Adventure", 0} }
        });
    }

    // Show the scene corresponding to sceneId.
    void showScene(int sceneId) {
        currentSceneId = sceneId;
        content_->clear();

        // Validate scene id.
        if (sceneId < 0 || sceneId >= static_cast<int>(scenes.size())) {
            content_->addWidget(make_shared<WText>("Error: Scene not found."));
            return;
        }

        const Scene &sc = scenes[sceneId];

        // Display the scene description.
        auto descriptionText = content_->addWidget(make_shared<WText>(sc.description));
        descriptionText->setStyleClass("scene-description");
        content_->addWidget(make_shared<WBreak>());
        content_->addWidget(make_shared<WBreak>());

        // Create a button for each available option.
        for (size_t i = 0; i < sc.options.size(); i++) {
            string btnLabel = sc.options[i].first;
            int nextScene = sc.options[i].second;
            auto button = content_->addWidget(make_shared<WPushButton>(btnLabel));
            button->setStyleClass("option-button");
            button->clicked().connect([=] {
                showScene(nextScene);
            });
            content_->addWidget(make_shared<WBreak>());
        }
    }
};

//
// main() simply starts the Wt application.
//
int main(int argc, char **argv) {
    return WRun(argc, argv, [](const WEnvironment& env) {
        return make_unique<AdventureApp>(env);
    });
}
