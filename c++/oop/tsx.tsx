
import { useState } from "react";

export default function App() {
  const [tasks, setTasks] = useState([
    { id: 1, title: "Learn JavaScript", completed: true },
    { id: 2, title: "Learn React", completed: false },
    { id: 3, title: "Build a project", completed: false }
  ]);

  const [input, setInput] = useState("");
  const [filter, setFilter] = useState("all");

  function addTask(event) {
    event.preventDefault();

    if (!input.trim()) return;

    const newTask = {
      id: Date.now(),
      title: input.trim(),
      completed: false
    };

    setTasks(previous => [...previous, newTask]);
    setInput("");
  }

  function toggleTask(id) {
    setTasks(previous =>
      previous.map(task =>
        task.id === id
          ? { ...task, completed: !task.completed }
          : task
      )
    );
  }

  function deleteTask(id) {
    setTasks(previous =>
      previous.filter(task => task.id !== id)
    );
  }

  const filteredTasks = tasks.filter(task => {
    if (filter === "completed") return task.completed;
    if (filter === "pending") return !task.completed;
    return true;
  });

  const completedCount = tasks.filter(
    task => task.completed
  ).length;

  return (
    <main className="app">
      <h1>My Task Manager</h1>

      <p>
        Completed: {completedCount} / {tasks.length}
      </p>

      <form onSubmit={addTask}>
        <input
          value={input}
          onChange={event => setInput(event.target.value)}
          placeholder="Enter a task..."
          aria-label="Task title"
        />

        <button type="submit">Add Task</button>
      </form>

      <div className="filters">
        <button onClick={() => setFilter("all")}>
          All
        </button>

        <button onClick={() => setFilter("pending")}>
          Pending
        </button>

        <button onClick={() => setFilter("completed")}>
          Completed
        </button>
      </div>

      {filteredTasks.length === 0 ? (
        <p>No tasks found.</p>
      ) : (
        <ul>
          {filteredTasks.map(task => (
            <li key={task.id}>
              <label>
                <input
                  type="checkbox"
                  checked={task.completed}
                  onChange={() => toggleTask(task.id)}
                />

                <span
                  style={{
                    textDecoration: task.completed
                      ? "line-through"
                      : "none"
                  }}
                >
                  {task.title}
                </span>
              </label>

              <button
                onClick={() => deleteTask(task.id)}
                aria-label={`Delete ${task.title}`}
              >
                Delete
              </button>
            </li>
          ))}
        </ul>
      )}

      <footer>
        <p>Keep learning and building!</p>
      </footer>
    </main>
  );
}
