
const tasks = [];

function addTask(title) {
  if (!title || title.trim() === "") {
    console.log("Task title cannot be empty.");
    return;
  }

  const task = {
    id: Date.now(),
    title: title.trim(),
    completed: false,
    createdAt: new Date()
  };

  tasks.push(task);
  console.log("Task added:", task.title);
}

function completeTask(id) {
  const task = tasks.find(item => item.id === id);

  if (!task) {
    console.log("Task not found.");
    return;
  }

  task.completed = true;
  console.log("Task completed:", task.title);
}

function deleteTask(id) {
  const index = tasks.findIndex(item => item.id === id);

  if (index === -1) {
    console.log("Task not found.");
    return;
  }

  const removed = tasks.splice(index, 1);
  console.log("Task deleted:", removed[0].title);
}

function listTasks() {
  if (tasks.length === 0) {
    console.log("No tasks available.");
    return;
  }

  tasks.forEach((task, index) => {
    const status = task.completed ? "Done" : "Pending";
    console.log(`${index + 1}. ${task.title} - ${status}`);
  });
}

function getPendingTasks() {
  return tasks.filter(task => !task.completed);
}

function getCompletedTasks() {
  return tasks.filter(task => task.completed);
}

function searchTasks(query) {
  const keyword = query.toLowerCase();

  return tasks.filter(task =>
    task.title.toLowerCase().includes(keyword)
  );
}

function showStatistics() {
  const total = tasks.length;
  const completed = getCompletedTasks().length;
  const pending = getPendingTasks().length;

  console.log("Total tasks:", total);
  console.log("Completed:", completed);
  console.log("Pending:", pending);
}

addTask("Learn JavaScript");
addTask("Learn React");
addTask("Build a project");

completeTask(tasks[0].id);
listTasks();
showStatistics();

console.log("Search results:", searchTasks("learn"));
